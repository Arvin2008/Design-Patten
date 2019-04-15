#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

#include <iostream>
using namespace std;

class SingleCore
{
public:
    virtual void Show() = 0;
};

class SingleCoreA : public SingleCore
{
public:
    void Show()
    {
        cout << "SingleCore A." << endl;
    }
};

class SingleCoreB: public SingleCore
{
public:
    void Show()
    {
        cout << "SingleCore B" << endl;
    }
};

class MultiCore
{
public:
    virtual void Show() = 0;
};

class MultiCoreA : public MultiCore
{
public:
    void Show ()
    {
        cout << "Multi core A" << endl;
    }
};

class MultiCoreB : public MultiCore
{
public:
    void Show()
    {
        cout << "Multi Core B" << endl;
    }
};

class AbstractFactory
{
public:
    AbstractFactory();
    virtual SingleCore* CreateSingleCore() = 0;
    virtual MultiCore* CreateMultiCore() = 0;
};

class FactoryA : public AbstractFactory
{
public:
    SingleCore* CreateSingleCore();
    MultiCore* CreateMultiCore();
};

class FactoryB : public AbstractFactory
{
public:
    SingleCore* CreateSingleCore();
    MultiCore* CreateMultiCore();
};

#endif // ABSTRACTFACTORY_H
