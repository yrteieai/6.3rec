#include "pch.h"
#include "CppUnitTest.h"
#include "../6.3_rec(2)/6.3_rec(2).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestProject2
{
	TEST_CLASS(UnitTestProject2)
	{
	public:

		TEST_METHOD(TestCountNegativeTemplate)
		{
			int a[] = { -5, 3, -1, 7, -6, 2 };
			int expectedNegativeCount = 3;
			int actualNegativeCount = CountNegativeTemplate(a, 6);
			Assert::AreEqual(expectedNegativeCount, actualNegativeCount);
		}

		TEST_METHOD(TestModifyNegativeElementsTemplate)
		{
			int a[] = { -5, 3, -1, 7, -6, 2 };
			int expected[] = { 5, 3, 1, 7, 6, 2 };
			ModifyNegativeElementsTemplate(a, 6);
			for (int i = 0; i < 6; ++i) {
				Assert::AreEqual(expected[i], a[i]);
			}
		}
	};
}
