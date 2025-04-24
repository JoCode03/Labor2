#include "PizzaMargherita.h"
#include "VegetableSoup.h"
#include "dishlib/AbstractDish.h"
#include <memory>
#include "DishFactory.h"

using namespace std;
using namespace dishlib;

int main() {
    vector<unique_ptr<AbstractDish>> vDishes;
    std::unique_ptr<AbstractDish> pizza = DishFactory::CreateDish(DishType::PizzaMargherita);
    vDishes.push_back(std::move(pizza));
    std::unique_ptr<AbstractDish> soup = DishFactory::CreateDish(DishType::VegetableSoup);
    vDishes.push_back(std::move(soup));

    PizzaMargherita pizza("Pizza Margherita");
    pizza.Prepare();
    std::cout << "------------------------" << std::endl;
    VegetableSoup soup("Vegetable Soup");
    soup.Prepare();

    return 0;
}