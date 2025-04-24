#ifndef DISHFACTORY_H
#define DISHFACTORY_H
#include <memory>
#include "AbstractDish.h"

namespace dishlib {

    enum class DishType {
        PizzaMargherita,
        VegetableSoup
    };

    class DishFactory {
    public:
        static std::unique_ptr<AbstractDish> CreateDish(DishType type);
    };

    };



#endif //DISHFACTORY_H
