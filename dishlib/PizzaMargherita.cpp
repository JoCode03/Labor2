#include <string>
#include "PizzaMargherita.h"
#include <vector>

namespace dishlib {
    PizzaMargherita::PizzaMargherita(const std::string &name) : AbstractDish(name) {}
    void PizzaMargherita::Prepare() {

        std::vector<std::string> ingredients = {
            "Pizzateig ", "Tomatensauce ", "Käse ", "Basilikum "
        };

        std::vector<std::string> steps = {
            "herstellen", "verteilen", "reiben und verteilen", "streuen"
        };

        for (size_t i = 0; i < ingredients.size(); ++i) {
            addIngredient(ingredients[i]);
            std::cout << "Schritt [" << i << "]: " << vIngredients[i]<< steps[i] << std::endl;
        }

        std::cout << "Letzter Schritt: Pizza backen\n";
    }
}
