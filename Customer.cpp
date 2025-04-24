#include "Customer.h"

namespace dishlib {

    Customer::Customer(const std::string& name) : customerName(name) {}

    void Customer::ServeDish(std::unique_ptr<AbstractDish>& dish) {
        customerDish = std::move(dish);
    }

    void Customer::EatDish() {
        customerDish = nullptr;
    }

}
