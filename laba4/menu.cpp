#include "menu.h"
#include<iostream>
#include " section.h"
#include <algorithm>
#include "trapeze.h"

void menu::start() {
    while (true)
        functions();
}


void menu::functions() {
    std::cout << "1. Add \n";
    std::cout << "2. Draw\n";
    std::cout << "3. Square\n";
    std::cout << "4. Perimeter\n";
    std::cout << "5. Center of mass\n";
    std::cout << "6. Size\n";
    std::cout << "7. Sort\n";
    std::cout << "8. Exit\n";

    int c;
    std::cin >> c;
    command(c);
}


void menu::command(int c) {
    switch (c) {
        case 1:
            add();
            break;
        case 2:
            draw();
            break;
        case 3:
            allSquare();
            break;
        case 4:
            allPerimeter();
            break;
        case 5:
            centerOfMass();
            break;
        case 6:
            allSize();
            break;
        case 7:
            sortfigures();
            break;
        case 8:
            exit(0);
    }
}

void menu::add() {
    std::cout << "1. Section 2.Trapeze" << std::endl;
    int c;
    std::cin >> c;
    switch (c) {
        case 1:
            figures.push_back(new section());
            figures[figures.size() - 1]->initFromDialog();
            break;
        case 2:
            figures.push_back(new trapeze());
            figures[figures.size() - 1]->initFromDialog();
            break;
    }

}

void menu::draw() {

    for (auto ob : figures) {
        ob->draw();
    }
}


void menu::allSquare() {
    double result = 0;
    for (auto ob: figures) {
        result += ob->square();
    }

    std::cout << "Square = " << result << std::endl;
}

void menu::allPerimeter() {
    double result = 0;
    for (auto ob: figures) {
        result += ob->perimeter();
    }

    std::cout << "Perimeter = " << result << std::endl;
}

void menu::centerOfMass() {
    double xi = 0, yi = 0, mi = 0;
    for (auto ob:figures) {
        xi += ob->position().x * ob->mass();
        yi += ob->position().y * ob->mass();
        mi += ob->mass();
    }

    std::cout << xi / mi << " " << yi / mi << std::endl;

}

void menu::allSize() {
    unsigned int m = 0;
    for (auto ob: figures) {
        m += ob->size();
    }
    std::cout << m << std::endl;
}

void menu::sortfigures() {
    for (int i = 0; i < figures.size() - 2; i++) {
        for (int j = 0; j < figures.size() - 2; j++) {
            if (figures[j + 1]->mass() < figures[j]->mass())
                std::swap(figures[j + 1], figures[j]);
        }
    }

}
