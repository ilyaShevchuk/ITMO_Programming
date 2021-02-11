#pragma once

#include "CVector2D.h"

class IGeoFig {
public:
    virtual double square() const = 0;

    virtual double perimeter() const = 0;
};


class IPhysObject {
public:
    virtual double mass() const = 0;

    virtual CVector2D position() = 0;

    virtual bool operator==(const IPhysObject &ob) const = 0;

    virtual bool operator<(const IPhysObject &ob) const = 0;
};

class IPrintable {
public:

    virtual void draw() = 0;
};

class IDialogInitiable {
public:
    virtual void initFromDialog() = 0;
};

class BaseCObject {
public:
    virtual const char *classname() = 0;

    virtual unsigned int size() = 0;
};


class object : public BaseCObject, public IDialogInitiable, public IPrintable, public IPhysObject, public IGeoFig {

};