// InClass.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "InClass.h"


// This is an example of an exported variable
INCLASS_API int nInClass=0;

// This is an example of an exported function.
INCLASS_API int fnInClass(void)
{
    return 0;
}

INCLASS_API int testMe(int i)
{
    return i * 2; 
}

// This is the constructor of a class that has been exported.
CInClass::CInClass()
{
    return;
}
