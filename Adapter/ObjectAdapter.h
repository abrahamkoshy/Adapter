#pragma once

#include "Target.h"

class Adaptee;

class ObjectAdapter : public Target
{
public:
    ObjectAdapter(Adaptee* adaptee);
    ~ObjectAdapter();
    
    void Request ();

private:
    Adaptee* adaptee;
};

