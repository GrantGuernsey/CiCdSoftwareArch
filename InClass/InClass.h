// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the INCLASS_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// INCLASS_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef INCLASS_EXPORTS
#define INCLASS_API __declspec(dllexport)
#else
#define INCLASS_API __declspec(dllimport)
#endif

// This class is exported from the dll
class INCLASS_API CInClass {
public:
	CInClass(void);
	int Calc(int a, int b);
	int Ming(int c, int d);
};

// extern INCLASS_API int nInClass;

// INCLASS_API int fnInClass(void);

// INCLASS_API int testMe(int i);
