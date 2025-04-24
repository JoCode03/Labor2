#include "DishFactory.h"
#include "AbstractDish.h"
#include "PizzaMargherita.h"
#include "VegetableSoup.h"

namespace dishlib {
    std::unique_ptr<AbstractDish> DishFactory::CreateDish(DishType type) {
        std::unique_ptr<AbstractDish> dish;

        switch (type) {
            case DishType::PizzaMargherita:
                dish = std::make_unique<PizzaMargherita>("PizzaMargherita");
            break;
            case DishType::VegetableSoup:
                dish = std::make_unique<VegetableSoup>("VegetableSoup");
            break;
        }
        dish->Prepare();
        return dish;
    }
}


