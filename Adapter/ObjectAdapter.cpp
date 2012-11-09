#include "stdafx.h"
#include "ObjectAdapter.h"
#include "Adaptee.h"

ObjectAdapter::ObjectAdapter(Adaptee* adaptee):
    adaptee(adaptee)
{
}


ObjectAdapter::~ObjectAdapter()
{
    if (adaptee != NULL)
    {
        delete adaptee;
        adaptee = NULL;
    }
}

void ObjectAdapter::Request()
{
    if (adaptee != NULL)
    {
        adaptee->SpecificRequest();
    }
}