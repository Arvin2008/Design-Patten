#include "abstractfactory.h"

AbstractFactory::AbstractFactory()
{

}

SingleCore *FactoryA::CreateSingleCore()
{
    return new SingleCoreA();
}

MultiCore *FactoryA::CreateMultiCore()
{
    return new MultiCoreA();
}

SingleCore *FactoryB::CreateSingleCore()
{
    return new SingleCoreB();
}

MultiCore *FactoryB::CreateMultiCore()
{
    return new MultiCoreB();
}
