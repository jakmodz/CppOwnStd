#include "pch.h"
#include "CppUnitTest.h"
#include "../CppCore.Library/String.h";

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CppCoreLibraryTests
{
	TEST_CLASS(StringTest)
	{
	public:

		TEST_METHOD(Clear)
		{
			String str("AAA");
			str.Clear();
			Assert::AreEqual((size_t)0, str.Size());
		}
		TEST_METHOD(ToUpper)
		{
			String str("aaa");
			Assert::AreEqual("AAA", str.ToUpperCase().CString());
		}
		TEST_METHOD(ToLower)
		{
			String str("AAa");
			Assert::AreEqual("aaa", str.ToLowerCase().CString());
		}
	};
}
