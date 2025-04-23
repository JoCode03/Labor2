#ifndef FACTORY_H
#define FACTORY_H
#include <iostream>
#include <ostream>
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

    template <typename Recipe>
    class Dish : public AbstractDish {
        public:
        explicit Dish(const std::string name) : AbstractDish(name) {}

        void Prepare() override {
            std::cout << "Zubereitung vom Rezept: " << this->GetDishName() << "\n" << std::endl;

            for (const auto& ingredient : Recipe::Ingredients()) {
                addIngredient(ingredient);
            }

            for (const auto& CookingSteps : Recipe::CookingSteps()) {
                std::cout << "Anleitung: " << CookingSteps << std::endl;
            }
        }
    };

    struct PizzaMargheritaRecipe {
        static std::vector<std::string> Ingredients() {
            return{
                "Pizzateig",
                "Tomatensauce",
                "Käse",
                "Basilikum"
            };
        }
        static std::vector<std::string> CookingSteps() {
            return{
                "1. Teig herstellen",
                "2. Teig ausrollen",
                "3. Tomatensauce hinzufügen",
                "4. Käse verteilen",
                "5. Basilikum streuen",
                "6. Pizza backen \n"
            };
        }
    };

    struct VegetableSoupRecipe {
        static std::vector<std::string> Ingredients() {
            return{
                "Wasser",
                "Gemüsebrühe",
                "Möhre",
                "Lauch",
                "Zwiebel"
            };
        }
        static std::vector<std::string> CookingSteps() {
            return{
                "1. Gemüse schneiden",
                "2. Wasser kochen",
                "3. Gemüsebrühe einrühren",
                "4. Möhre hinzufügen",
                "5. Lauch hinzufügen",
                "6. Zwiebel hinzufügen",
                "7. Suppe kochen lassen \n"
            };
        }
    };
}


#endif //FACTORY_H
