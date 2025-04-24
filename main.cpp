#include "PizzaMargherita.h"
#include "VegetableSoup.h"
#include "dishlib/AbstractDish.h"
#include <memory>
#include "DishFactory.h"

using namespace std;
using namespace dishlib;

int main() {
    vector<unique_ptr<AbstractDish>> vDishes;
    vDishes.push_back(DishFactory::CreateDish(DishType::PizzaMargherita));
    vDishes.push_back(DishFactory::CreateDish(DishType::VegetableSoup));

    PizzaMargherita pizza("Pizza Margherita");
    pizza.Prepare();
    std::cout << "------------------------" << std::endl;
    VegetableSoup soup("Vegetable Soup");
    soup.Prepare();

    return 0;
}