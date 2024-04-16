#include "pch.h"
#include "CppUnitTest.h"
#include "..\InClass\InClass.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{

			CInClass CInClass;
			Assert::AreEqual(2, CInClass.Calc(1, 2));
		}

		TEST_METHOD(TestMethod2)
		{

			CInClass CInClass;
			Assert::AreEqual(5, CInClass.Calc(3, 2));
		}

		TEST_METHOD(TestMethod3)
		{

			CInClass CInClass;
			Assert::IsTrue(CInClass.Calc(3, 2) > 0);
		}

		TEST_METHOD(TestMethod4)
		{

			CInClass CInClass;
			Assert::AreEqual(5, CInClass.Calc(3, 2));
		}

		TEST_METHOD(TestMethod5)
		{

			CInClass CInClass;
			Assert::AreEqual(5, CInClass.Ming(3, 2));
		}
	};
}
