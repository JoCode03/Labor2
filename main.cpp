#include "dishlib/Factory.h"

int main() {
    dishlib::Dish<dishlib::PizzaMargheritaRecipe> pizza("Pizza Margherita");
    pizza.Prepare();
    return 0;
}