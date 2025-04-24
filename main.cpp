#include "dishlib/AbstractDish.h"

using namespace std;
using namespace dishlib;

int main() {
    dishlib::Dish<dishlib::PizzaMargheritaRecipe> pizza("Pizza Margherita");
    pizza.Prepare();
    dishlib::Dish<dishlib::VegetableSoupRecipe> vegetable("Vegetable Soup");
    vegetable.Prepare();
    return 0;
}