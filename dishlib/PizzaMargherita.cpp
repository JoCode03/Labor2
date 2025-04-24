#include <string>
#include "PizzaMargherita.h"

class AbstractDish : public PizzaMargherita {
    std::string ingredient;
};
class PizzaMargheritaRecipe {
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