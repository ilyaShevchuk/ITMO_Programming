#pragma once

class CVector2D {
public:
    double x, y;

    CVector2D(double=0, double=0);

    double length() const;

    CVector2D operator+(const CVector2D &) const;

    CVector2D operator-(const CVector2D &) const;

};
