#pragma once

#include "Target.h"
#include "Adaptee.h"

class ClassAdapter : public Target, private Adaptee
{
public:
    ClassAdapter();
    ~ClassAdapter();

    void Request ();
};

