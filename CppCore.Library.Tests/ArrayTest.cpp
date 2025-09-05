#include "pch.h"
#include "CppUnitTest.h"
#include "../CppCore.Library/Array.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CppCoreLibraryTests
{
	TEST_CLASS(ArrayTest)
	{
	public:
		TEST_METHOD(ConstructorWithInitializerList)
		{
			Array<int, 10> array = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

			for (int i = 0; i < array.Size(); i++)
			{
				Assert::AreEqual(i, array[i]);
			}
		}

		TEST_METHOD(Fill)
		{
			Array<int, 10> array;

			array.Fill(11);

			for (int i = 0; i < array.Size(); i++)
			{
				Assert::AreEqual(11, array[i]);
			}
		}

		TEST_METHOD(FrontAndBack)
		{
			Array<int, 2> array = { 11, 99 };

			Assert::AreEqual(11, array.Front());
			Assert::AreEqual(99, array.Back());

			array.Front() = 1;
			array.Back() = 9;

			Assert::AreEqual(1, array.Front());
			Assert::AreEqual(9, array.Back());
		}
	};
}
