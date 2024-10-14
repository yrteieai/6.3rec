#include "pch.h"
#include "CppUnitTest.h"
#include "../6.3_rec(1)/6.3_rec(1).cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestProject1
{
	TEST_CLASS(UnitTestProject1)
	{
	public:

		TEST_METHOD(TestCountNegative)
		{
			int a[] = { -5, 3, -1, 7, -6, 2 };
			int expectedNegativeCount = 3;
			int actualNegativeCount = CountNegative(a, 6);
			Assert::AreEqual(expectedNegativeCount, actualNegativeCount);
		}

		TEST_METHOD(TestModifyNegativeElements)
		{
			int a[] = { -5, 3, -1, 7, -6, 2 };
			int expected[] = { 5, 3, 1, 7, 6, 2 };
			ModifyNegativeElements(a, 6);
			for (int i = 0; i < 6; ++i) {
				Assert::AreEqual(expected[i], a[i]);
			}
		}
	};
}
