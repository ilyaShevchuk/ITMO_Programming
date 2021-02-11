#pragma once

#include "object.h"

class section: public object {
private:
    CVector2D start;
    CVector2D end;

public:
    section(CVector2D, CVector2D);

    section();

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
