#ifndef PIZZAMARGHERITA_H
#define PIZZAMARGHERITA_H
#include "AbstractDish.h"

namespace dishlib {
    class PizzaMargherita : public AbstractDish {

        public:
        PizzaMargherita() = delete;
        explicit PizzaMargherita(const std::string& dishName);
        void Prepare() override;
    };
}

#endif //PIZZAMARGHERITA_H
