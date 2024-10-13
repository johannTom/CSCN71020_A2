#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int*,int*);
extern "C" int getArea(int*,int*);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BCSRecUnittest
{
	TEST_CLASS(BCSRecUnittest)
	{
	public:
		
		TEST_METHOD(getPerimeterFunction)
		{
			//int getPerimeter(int* length, int* width); 
			//this fuction gets the perimeter of rectangle with the given length and width
			int result = 0;
			int length = 1;
			int width = 1;

			result = getPerimeter(&length,&width);
			Assert::AreEqual(4, result);

		}
		TEST_METHOD(getAreaFunction)
		{
			//int getArea(int* length, int* width);
			//this fuction gets the area of rectangle with the given length and width
			int result = 0;
			int length = 1;
			int width = 1;

			result = getArea(&length, &width);
			Assert::AreEqual(1, result);
		}
		TEST_METHOD(TestMethod3)
		{
		}
	};
}

