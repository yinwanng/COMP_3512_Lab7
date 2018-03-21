#include "CppUnitTest.h"
#include "../Lab7/Lab7.h"
#include <vector>

using std::vector;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab7UnitTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		vector<int> values = { 5, 10, 15, 20, 25, 25 };
		double value = static_cast<double>(100) / 6;

		TEST_METHOD(TestSum)
		{
			Assert::AreEqual(100, sum(values));
		}

		TEST_METHOD(TestMin)
		{
			Assert::AreEqual(5, min(values));
		}

		TEST_METHOD(TestMax)
		{
			Assert::AreEqual(25, max(values));
		}

		TEST_METHOD(TestAverage)
		{
			Assert::AreEqual(value, average(values));
		}

	};
}