#ifndef FACTORY_H
#define FACTORY_H
#include <string>
#include <vector>

namespace dishlib {
        struct AbstractDish {
        //Struct oder Class?
        public:
            explicit AbstractDish(const std::string name) : dishName(name) {}
            virtual void Prepare() = 0;
            virtual ~AbstractDish() = default;
            AbstractDish() = delete;

            std::string GetDishName() const {
                return dishName;
            }
            std::vector<std::string> GetIngredients() const {
                return vIngredients;
            }
            size_t GetNumberIngredients() const {
                return vIngredients.size();
            }


        protected:
            void addIngredient(const std::string ingredient) {
                vIngredients.push_back(ingredient);
            }
            std::vector<std::string> vIngredients;
            std::string dishName;
        };
}


#endif //FACTORY_H
