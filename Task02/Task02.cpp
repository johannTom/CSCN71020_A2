#include "pch.h"
#include "CppUnitTest.h"

extern "C" int setLength(int, int*);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Task02
{
	TEST_CLASS(Task02)
	{
	public:
		
		TEST_METHOD(setLengthFunctionWhereInputis5)
		{
			//this fuction tests the setLength function of rectangle
			// with the given length
			int result = 0;
			int input = 5;
			int length = 1;
			setLength(input, &length);
			result = length;
			Assert::AreEqual(input, result);
		}
		TEST_METHOD(setLengthFunctionWhereInputis50)
		{
			//this fuction tests the getPerimeter function of rectangle
			// with the given length
			int result = 0;
			int input = 50;
			int length = 0;
			setLength(input, &length);
			result = length;
			Assert::AreEqual(input, result);
		}
		TEST_METHOD(setLengthFunctionWhereInputis99)
		{
			//this fuction tests the getPerimeter function of rectangle
			// with the given length
			int result = 0;
			int input = 99;
			int length = 0;
			setLength(input, &length);
			result = length;
			Assert::AreEqual(input, result);
		}
	};
}
