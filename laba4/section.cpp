#include " section.h"
#include <iostream>
#include <cmath>

section::section(CVector2D start_, CVector2D end_ )
        :start(start_), end(end_){};

section::section() = default;

double section::square() const {
    return (end - start).length();
}

double section::perimeter() const {
    return (end - start).length();
}

double section::mass() const {
    return this->square();
}

CVector2D section::position() {
    return start - end;
}

bool section::operator==(const IPhysObject &ob) const {
    return (this->mass() == ob.mass());
}

bool section::operator<(const IPhysObject &ob) const {
    return (this->mass() < ob.mass());
}

void section::draw() {
    std::cout<<this->classname() << std::endl;
    std::cout<<"A "<<start.x<<" "<<start.y<<std::endl;
    std::cout<<"B "<<end.x<<" "<<end.y<<std::endl;
}

void section::initFromDialog() {
    double x1, y1;
    std::cout<< "new section" <<std::endl;
    std::cout<< "1 coordinate" <<std::endl;
    std::cin>>x1>>y1;
    start = CVector2D(x1, y1);
    double x2, y2;
    std::cout<< "2 coordinate" <<std::endl;
    std::cin>>x2>>y2;
    end = CVector2D(x2, y2);
}

const char *section::classname() {
    return "section";
}

unsigned int section::size() {
    return sizeof(*this);
}
