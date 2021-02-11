#pragma once

#include<vector>
#include "object.h"


class menu {
public:
    std::vector<object *> figures;

    void start();

    void functions();

    void add();

    void draw();

    void allSquare();

    void allPerimeter();

    void centerOfMass();

    void allSize();

    void sortfigures();

    void command(int);
};
