#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <memory>
#include <string>
#include "AbstractDish.h"

namespace dishlib {

    class Customer {
    public:
        Customer() = delete;
        explicit Customer(const std::string& name);
        void ServeDish(std::unique_ptr<AbstractDish>& dish);
        void EatDish();

    protected: //Kein Zugriff von außen. Unterklassen könnten Zugriff gebrauchen
        std::unique_ptr<AbstractDish> customerDish;

    private: //Kein direkter Zugriff daher private
        std::string customerName;
    };

}

#endif // CUSTOMER_H
