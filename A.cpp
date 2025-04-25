#include <iostream>
#include "A.h"


    A::A(int Wert) { //Konstruktor

        _nptr = new int(Wert); // Speicherallokierung
        _aptr = new int[5];

        for (int i = 0; i < 5; ++i) {
            _aptr[i] = 42;
        }
        std::cout << "class A constructor: " << Wert << std::endl;
    };
    A::~A() { //Destruktor
        if (nullptr == _nptr) { // Yoda
            std::cout << "class A destructor: nullptr " << std::endl;

        }
        else{
            std::cout << "class A destructor: " << *_nptr << std::endl;
            delete _nptr;
            delete[] _aptr;
        }
    }

A::A(A const &rhs){ // Kopierkontruktor mit Referenzoperator auf a1
        _nptr = new int(*(rhs._nptr));
        _aptr = new int[5];

        for (int i = 0; i < 5; ++i) {
        this->_aptr[i] = rhs._aptr[i]; // Damit nicht nur Kopie von einem Array Element erstellt wird
        }
        std::cout << "Class A copy constructor: " << *_nptr << std::endl;
        }

A::A(A &&rhs) { //Verschiebekonstruktor (übergeben von temporärem rvalue)
        std::swap(_nptr, rhs._nptr);
        std::swap(_aptr, rhs._aptr);
        std::cout << "Class A move constructor: " << *_nptr << std::endl; //oder als *this->_nptr
    }

A& A::operator=(A const &rhs) {//Kopierzuweisungsoperator
        if (this != &rhs) {

            _nptr = new int;
            _aptr = new int[5];

            *this->_nptr = *rhs._nptr;

            for (int i = 0; i < 5; ++i) {
                this->_aptr[i] = rhs._aptr[i];
            }
                std::cout << "Class A copy assignment operator: " << *_nptr << std::endl;


            }
        return *this;
        }

A& A::operator=(A &&rhs) { //Verschiebezuweisungsoperator
        std::swap(_nptr, rhs._nptr);
        std::swap(_aptr, rhs._aptr);
        std::cout << "Class A move assignment operator: " << *((*this)._nptr) << std::endl; //oder als *this->_nptr
        return *this;
    }
