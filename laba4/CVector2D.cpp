#include "CVector2D.h"
#include <cmath>

CVector2D::CVector2D(double x, double y)
        : x(x), y(y) {};

CVector2D CVector2D::operator+(const CVector2D &a) const {
    return {x + a.x, y + a.y};
}

CVector2D CVector2D::operator-(const CVector2D &a) const {
    return {x - a.x, y - a.y};
}

double CVector2D::length() const {
    return sqrt(x * x + y * y);
}