#include "simplefactory.h"
#include <iostream>

using namespace std;

CSimpleFactory::CSimpleFactory()
{

}

CProduct *CSimpleFactory::CreatProduct(CProductType enType)
{
    CProduct *pProduct = nullptr;
    switch (enType)
    {
    case CProductType::enTypeA:
        pProduct = new CProductA();
        break;

    case CProductType::enTypeB:
        pProduct = new CProductB();
        break;

    case CProductType::enTypeC:
        pProduct = new CProductC();
        break;

    case CProductType::enTypeD:
        pProduct = new CProductD();
        break;

    default:
        break;
    }

    return pProduct;
}

void CProductA::show()
{
    cout << "Product A." << endl;
}

void CProductB::show()
{
    cout << "Product B.." << endl;
}

void CProductC::show()
{
    cout << "Product C..." << endl;
}

void CProductD::show()
{
    cout << "Product D...." << endl;
}
