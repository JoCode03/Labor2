#include "dishlib/AbstractDish.h"
#include <memory>
#include <algorithm>
#include "DishFactory.h"
#include "Customer.h"



using namespace std;
using namespace dishlib;

int main() {
    vector<unique_ptr<AbstractDish>> vDishes;
    std::unique_ptr<AbstractDish> pizza = DishFactory::CreateDish(DishType::PizzaMargherita);
    vDishes.push_back(std::move(pizza));
    std::cout << "------------------------" << std::endl;
    std::unique_ptr<AbstractDish> soup = DishFactory::CreateDish(DishType::VegetableSoup);
    vDishes.push_back(std::move(soup));

    std::sort(vDishes.begin(), vDishes.end(),
        [](const std::unique_ptr<AbstractDish>& a, const std::unique_ptr<AbstractDish>& b) {
            return a->GetNumberIngredients() < b->GetNumberIngredients();
        }
    );

    std::cout << "Sortierte Rezepte:\n";
    for (const auto& dish : vDishes) {
        std::cout << dish->GetDishName()
                  << " (" << dish->GetNumberIngredients() << " Zutaten)"
                  << std::endl;
    }

    vector<unique_ptr<Customer>> customers;
    customers.push_back(make_unique<Customer>("Max Mustermann"));
    customers.push_back(make_unique<Customer>("Erika Musterfrau"));
    customers.push_back(make_unique<Customer>("Tim Mustermann"));
    customers.push_back(make_unique<Customer>("Lana Musterfrau"));


    return 0;
}