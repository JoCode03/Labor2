#include "AbstractDish.h"

using namespace std;
namespace dishlib {

    AbstractDish::AbstractDish(const std::string& name) : dishName(name) {}


        std::string AbstractDish::GetDishName() const {
            return dishName;
        }
        std::vector<std::string> AbstractDish::GetIngredients() const {
            return vIngredients;
        }
        size_t AbstractDish::GetNumberIngredients() const {
            return vIngredients.size();
        }

        void AbstractDish::addIngredient(const std::string ingredient) {
            vIngredients.push_back(ingredient);
        }
    };



