#ifndef SIMPLEFACTORY_H
#define SIMPLEFACTORY_H

enum class CProductType
{
    enTypeA,
    enTypeB,
    enTypeC,
    enTypeD
};

class CProduct
{
public:
    virtual void show() = 0;
};

class CProductA : public CProduct
{
public:
    void show();
};

class CProductB : public CProduct
{
public:
    void show();
};

class CProductC : public CProduct
{
public:
    void show();
};

class CProductD : public CProduct
{
public:
    void show();
};

class CSimpleFactory
{
public:
    CSimpleFactory();

    CProduct* CreatProduct(CProductType enType);
};

#endif // SIMPLEFACTORY_H
