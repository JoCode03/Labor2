#include <string>
#include "VegetableSoup.h"
#include <vector>
#include <iostream>

namespace dishlib {
    VegetableSoup::VegetableSoup(const std::string &name) : AbstractDish(name) {}
    void VegetableSoup::Prepare() {

        std::vector<std::string> ingredients = {
            "Wasser ", "Gemüsebrühe ", "Möhre ", "Lauch ", "Zwiebel "
        };

        std::vector<std::string> steps = {
            "kochen","einrühren","schneiden und hinzufügen","schneiden hinzufügen", "schneiden und hinzufügen",
        };

        for (size_t i = 0; i < ingredients.size(); ++i) {
            addIngredient(ingredients[i]);
            std::cout << "Schritt [" << i + 1 << "]: " << vIngredients[i] << steps[i] << std::endl;
        }

        std::cout << "Letzter Schritt: Suppe kochen lassen \n";
    }
}
