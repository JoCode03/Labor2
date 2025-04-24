#ifndef VEGETABLESOUP_H
#define VEGETABLESOUP_H
#include "AbstractDish.h"

namespace dishlib {
    class VegetableSoup : public AbstractDish {

    public:
        VegetableSoup() = delete;
        explicit VegetableSoup(const std::string& dishName);
        void Prepare() override;
    };
}

#endif // VEGETABLESOUP_H

