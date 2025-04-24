

#include "VegetableSoup.h"


class VegetableSoupRecipe {
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