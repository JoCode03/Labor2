#include "Factory.h"

struct AbstractDish {       //Struct oder Class?
public:
    virtual void Prepare() = 0;
    virtual ~AbstractDish();
};