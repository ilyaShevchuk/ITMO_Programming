#pragma once

#include "object.h"


class trapeze : public object {
private:
    CVector2D A, B, C, D;

public:
    trapeze();

    trapeze(CVector2D, CVector2D, CVector2D, CVector2D);


    double square() const override;

    double perimeter() const override;

    double mass() const override;

    CVector2D position() override;

    bool operator==(const IPhysObject &ob) const override;

    bool operator<(const IPhysObject &ob) const override;

    void draw() override;

    void initFromDialog() override;

    const char *classname() override;

    unsigned int size() override;
};
