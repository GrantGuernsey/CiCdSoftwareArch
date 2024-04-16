// InClass.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "InClass.h"


// This is an example of an exported variable
// INCLASS_API int nInClass=0;

// // This is an example of an exported function.
// INCLASS_API int fnInClass(void)
// {
//     return 0;
// }

// INCLASS_API int testMe(int i)
// {
//     return i * 2; 
// }

// This is the constructor of a class that has been exported.
CInClass::CInClass(void)
{


}

int CInClass::Calc(int a, int b)
{
    if (a == b)
    {
        return 2 - a
    }
    else if(a>b)
    {
        return a + b;
    }
    else
    {
        return a * b;
    }
   
}
int CInClass::Ming (int c, int d)
{
    if (c > d)
    {
        return c + d;

    }
    else
    {
        return c - d;
    }
}
