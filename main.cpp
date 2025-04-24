#include "PizzaMargherita.h"
#include "VegetableSoup.h"
#include "dishlib/AbstractDish.h"

using namespace std;
using namespace dishlib;

int main() {
    PizzaMargherita pizza("Pizza Margherita");
    pizza.Prepare();
    std::cout << "------------------------" << std::endl;
    VegetableSoup soup("Vegetable Soup");
    soup.Prepare();

    return 0;
}