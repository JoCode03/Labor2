#include <iostream>
#include "A.h"
#include <vector>

    int main() {
        A a1{3};
        A a2{a1};
        A a3{A{4}};
        std::vector<A> v;
        v.push_back(A{5});
        A a5{7};
        A a6{8};
        a6 = a5;
        A a7{9};
        a7 = A{10};
        A a8{11};
        A a9{std::move(a8)};
        return 0;
    }
