

#ifndef A_H
#define A_H



class A {
    int *_nptr {nullptr};
    int *_aptr {nullptr};

public:
    explicit A(int Wert);
    ~A();
    A(A const &rhs);
    A(A &&rhs);
    A& operator=(A const &rhs);
    A& operator=(A &&rhs);
};





#endif //A_H
