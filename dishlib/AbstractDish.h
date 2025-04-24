#ifndef ABSTRACTDISH_H
#define ABSTRACTDISH_H
#include <iostream>
#include <ostream>
#include <string>
#include <vector>

namespace dishlib {
        class  AbstractDish {


        public:
            explicit AbstractDish(const std::string& dishName);
            virtual void Prepare() = 0;
            virtual ~AbstractDish() = default;
            AbstractDish() = delete;

            virtual std::string GetDishName() const;
            virtual std::vector<std::string> GetIngredients() const;
            virtual size_t GetNumberIngredients() const;


        protected:
            void addIngredient(const std::string ingredient);
            std::vector<std::string> vIngredients;
            std::string dishName;
        };

    };




#endif //FACTORY_H
