//Main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Target.h"
#include "Adaptee.h"
#include "ClassAdapter.h"
#include "ObjectAdapter.h"

int _tmain(int argc, _TCHAR* argv[])
{
    //example using class adapter
    Target* target = new ClassAdapter();
    target->Request();

    //clean up
    delete target;

    //example using object adapter
    target = new ObjectAdapter(new Adaptee());
    target->Request();

    //clean up
    delete target;
	return 0;
}

