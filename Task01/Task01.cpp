#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int*, int*);
extern "C" int getArea(int*, int*);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Task01
{
	TEST_CLASS(Task01)
	{
	public:
		

		TEST_METHOD(getPerimeterFunction)
		{
			//this fuction tests the getPerimeter function of rectangle with the given length and width
			int result = 0;
			int length = 2;
			int width = 2;
			result = getPerimeter(&length, &width);
			Assert::AreEqual(8, result);
		}
		TEST_METHOD(getAreaFunction)
		{

			//this fuction gets the area of rectangle with the given length and width
			int result = 0;
			int length = 2;
			int width = 1;

			result = getArea(&length, &width);
			Assert::AreEqual(2, result);
		}

	};
}
