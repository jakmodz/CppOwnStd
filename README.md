# CppCore.Library

A C++ core library providing essential types and utilities inspired by .NET and other modern frameworks. The library includes classes for data structures, exceptions, type conversion, console I/O, and more.

## Features

- **Data Structures**: `Array`, `Vector`, `Tuple`
- **Type Conversion**: `BitConverter`, `Convert`
- **String Handling**: `String`
- **Exception Hierarchy**: `Exception`, `ArgumentException`, `IndexOutOfRangeException`, and others
- **Console Utilities**: `Console` for input/output and cursor control
- **Environment Info**: `Envoirment` for OS and environment variables
- **Math Utilities**: `Math`
- **Date and Time**: `DateTime`, `TimeZone`
- **Random Number Generation**: `Random`
- **Delegates and Events**: `Delegate`, `EventArgs`
- **URI Handling**: `Uri`, `UriBuilder`, `UriParser`

## Getting Started

1. Clone the repository.
2. Open the project in CLion or your preferred C++ IDE.
3. Build the project using CMake or your IDE's build system.

## Example Usage

```cpp
Array<int, 5> arr = {1, 2, 3, 4, 5};
Console::WriteLine(Convert::Int32ToString(arr[0]));