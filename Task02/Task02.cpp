#include "pch.h"
#include "CppUnitTest.h"

extern "C" int setLength(int, int*);
extern "C" int setWidth(int, int*);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Task02
{
	TEST_CLASS(Task02)
	{
	public:
		
			TEST_METHOD(setLengthFunctionWhereInputis0)
			{
				//this fuction tests the setLength function of rectangle
				// with the given length
				int result = 0;
				int input = 0;
				int length = 1;
				setLength(input, &length);
				result = length;
				Assert::AreEqual(input, result);
			}
			TEST_METHOD(setLengthFunctionWhereInputis50)
			{
				//this fuction tests the setLength function of rectangle
				// with the given length
				int result = 0;
				int input = 50;
				int length = 0;
				setLength(input, &length);
				result = length;
				Assert::AreEqual(input, result);
			}
			TEST_METHOD(setLengthFunctionWhereInputis100)
			{
				//this fuction tests the setLength function of rectangle
				// with the given length
				int result = 0;
				int input = 100;
				int length = 1;
				setLength(input, &length);
				result = length;
				Assert::AreEqual(input, result);
			}
			TEST_METHOD(setWidthFunctionWhereInputis3)
			{
				//this fuction tests the setWidth function of rectangle
				// with the given length
				int result = 0;
				int input = 3;
				int width = 0;
				setLength(input, &width);
				result = width;
				Assert::AreEqual(input, result);
			}
			TEST_METHOD(setWidthFunctionWhereInputis0)
			{
				//this fuction tests the setWidth function of rectangle
				// with the given length
				int result = 0;
				int input = 0;
				int width = 1;
				setLength(input, &width);
				result = width;
				Assert::AreEqual(input, result);
			}
			TEST_METHOD(setWidthFunctionWhereInputis100)
			{
				//this fuction tests the setWidth function of rectangle
				// with the given length
				int result = 0;
				int input = 100;
				int width = 0;
				setLength(input, &width);
				result = width;
				Assert::AreEqual(input, result);
			}
	};
}
