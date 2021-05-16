#include "pch.h"
#include "CppUnitTest.h"
#include "../7.1/7.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest71
{
	TEST_CLASS(UnitTest71)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			array<int, 100> arr = { 35, 26, 50, 15, 1 };
			Assert::AreEqual(avg(arr, 5),38);
		}
	};
}
