#include "trapeze.h"
#include <iostream>
#include <cmath>

trapeze::trapeze(CVector2D A, CVector2D B, CVector2D C, CVector2D D)
        : A(A), B(B), C(C), D(D) {};

trapeze::trapeze() = default;;

double trapeze::square() const {
    double h = abs(A.y - D.y);
    return h * ((A-B).length()+(C-D).length())/2;
}

double trapeze::perimeter() const {
    double h = A.y - D.y;
    double side = sqrt(pow(h, 2) + pow(((A-B).length()-(C-D).length())/2, 2));
    return (A - B).length() + (C - D).length() + 2*side;
}

double trapeze::mass() const {
    return this->square();
}

CVector2D trapeze::position() {
    return {(A + D).x / 2, (A + B).y / 2};
}

bool trapeze::operator==(const IPhysObject &ob) const {
    return (this->mass() == ob.mass());
}

bool trapeze::operator<(const IPhysObject &ob) const {
    return (this->mass() < ob.mass());
}


void trapeze::draw() {
    std::cout << "trapeze" << std::endl;
    std::cout << A.x << " " << A.y << std::endl;
    std::cout << B.x << " " << B.y << std::endl;
    std::cout << C.x << " " << C.y << std::endl;
    std::cout << D.x << " " << D.y << std::endl;
}

void trapeze::initFromDialog() {
    double x, y;
    std::cout << "new trapeze" << std::endl;
    std::cout << "1 coordinates" << std::endl;
    std::cin >> x >> y;
    A = CVector2D(x, y);
    std::cout << "2 coordinates" << std::endl;
    std::cin >> x >> y;
    B = CVector2D(x, y);
    std::cout << "3 coordinates" << std::endl;
    std::cin >> x >> y;
    C = CVector2D(x, y);
    std::cout << "4 coordinates" << std::endl;
    std::cin >> x >> y;
    D = CVector2D(x, y);

}

const char *trapeze::classname() {
    return "trapeze";
}

unsigned int trapeze::size() {
    return sizeof(*this);
}