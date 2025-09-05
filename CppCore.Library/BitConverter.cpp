#include "pch.h"
#include "BitConverter.h"
#include <iomanip>
#include <string>
Vector<byte> BitConverter::GetBytes(int value)
{
    Vector<byte> bytes;
    converter conv;
    conv.i32 = value;
    for (int i = 0; i < sizeof(int); i++)
    {
        bytes.push(conv.bytes[i]);
    }
    return bytes;
}

Vector<byte> BitConverter::GetBytes(unsigned int value)
{
    Vector<byte> bytes;
    converter conv;
    conv.u32 = value;
    for (int i = 0; i < sizeof(unsigned int); i++)
    {
        bytes.push(conv.bytes[i]);
    }
    return bytes;
}

Vector<byte> BitConverter::GetBytes(float value)
{
    Vector<byte> bytes;
    converter conv;
    conv.f = value;
    for (int i = 0; i < sizeof(float); i++)
    {
        bytes.push(conv.bytes[i]);
    }
    return bytes;
}

Vector<byte> BitConverter::GetBytes(double value)
{
    Vector<byte> bytes;
    converter conv;
    conv.d = value;
    for (int i = 0; i < sizeof(double); i++)
    {
        bytes.push(conv.bytes[i]);
    }
    return bytes;
}

Vector<byte> BitConverter::GetBytes(char value)
{
    Vector<byte> bytes;
    converter conv;
    conv.d = value;
    for (int i = 0; i < sizeof(double); i++)
    {
        bytes.push(conv.bytes[i]);
    }
    return bytes;
}

Vector<byte> BitConverter::GetBytes(bool value)
{
    Vector<byte> bytes;
    converter conv;
    conv.bo = value;
    for (int i = 0; i < sizeof(bool); i++)
    {
        bytes.push(conv.bytes[i]);
    }
    return bytes;
}

Vector<byte> BitConverter::GetBytes(long long value)
{
    Vector<byte> bytes;
    converter conv;
    conv.i64 = value;
    for (int i = 0; i < sizeof(long long); i++)
    {
        bytes.push(conv.bytes[i]);
    }
    return bytes;
}

Vector<byte> BitConverter::GetBytes(unsigned char value)
{
    Vector<byte> bytes;
    converter conv;
    conv.uch = value;
    for (int i = 0; i < sizeof(byte); i++)
    {
        bytes.push(conv.bytes[i]);
    }
    return bytes;
}

Vector<byte> BitConverter::GetBytes(unsigned long long value)
{
    Vector<byte> bytes;
    converter conv;
    conv.u64 = value;
    for (int i = 0; i < sizeof(unsigned long long); i++)
    {
        bytes.push(conv.bytes[i]);
    }
    return bytes;
}

double BitConverter::ToDouble(Vector<byte> bytes, int start_index)
{
    converter conv;
    int index = 0;
    for (int i = 0; i < sizeof(long long); ++i)
    {
        conv.bytes[i] = 0;
    }
    for (size_t i = 0; i < sizeof(double); ++i)
    {
        if (start_index + i < bytes.size())
        {
            conv.bytes[i] = bytes[start_index + i];
        }
        else
        {
            conv.bytes[i] = 0;
        }
    }
    return conv.d;
}

int BitConverter::ToInt(Vector<byte> bytes, int start_index)
{
    converter conv;
    int index = 0;
    for (int i = 0; i < sizeof(long long); ++i)
    {
        conv.bytes[i] = 0;
    }
    for (size_t i = 0; i < sizeof(int); ++i)
    {
        if (start_index + i < bytes.size())
        {
            conv.bytes[i] = bytes[start_index + i];
        }
        else
        {
            conv.bytes[i] = 0;
        }
    }
    return conv.i32;
}

unsigned int BitConverter::ToUInt(Vector<byte> bytes, int start_index)
{
    converter conv;
    int index = 0;
    for (int i = 0; i < sizeof(long long); ++i)
    {
        conv.bytes[i] = 0;
    }
    for (size_t i = 0; i < sizeof(unsigned int); ++i)
    {
        if (start_index + i < bytes.size())
        {
            conv.bytes[i] = bytes[start_index + i];
        }
        else
        {
            conv.bytes[i] = 0;
        }
    }
    return conv.u32;
}

float BitConverter::ToFloat(Vector<byte> bytes, int start_index)
{
    converter conv;
    int index = 0;
    for (int i = 0; i < sizeof(long long); ++i)
    {
        conv.bytes[i] = 0;
    }
    for (size_t i = 0; i < sizeof(float); ++i)
    {
        if (start_index + i < bytes.size())
        {
            conv.bytes[i] = bytes[start_index + i];
        }
        else
        {
            conv.bytes[i] = 0;
        }
    }
    return conv.f;
}

unsigned long long BitConverter::ToUInt64(Vector<byte> bytes, int start_index)
{
    converter conv;
    int index = 0;
    for (int i = 0; i < sizeof(long long); ++i)
    {
        conv.bytes[i] = 0;
    }
    for (size_t i = 0; i < sizeof(long long); ++i)
    {
        if (start_index + i < bytes.size())
        {
            conv.bytes[i] = bytes[start_index + i];
        }
        else
        {
            conv.bytes[i] = 0;
        }
    }
    return conv.u64;
}

long long BitConverter::ToInt64(Vector<byte> bytes, int start_index)
{
    converter conv;
    int index = 0;
    for (int i = 0; i < sizeof(long long); ++i)
    {
        conv.bytes[i] = 0;
    }
    for (size_t i = 0; i < sizeof(long long); ++i)
    {
        if (start_index + i < bytes.size())
        {
            conv.bytes[i] = bytes[start_index + i];
        }
        else
        {
            conv.bytes[i] = 0;
        }
    }
    return conv.i64;
}

unsigned char BitConverter::ToUInt8(byte value)
{
    return value;
}

String BitConverter::ToString(Vector<byte> bytes)
{
    String result;
    for (int i = 0; i < bytes.size(); i++)
    {
        std::stringstream stream;
        stream << std::hex << bytes[i];
        std::string result(stream.str());
        result += result.c_str();
    }
    return result;
}

String BitConverter::ToString(Vector<byte> bytes, int index)
{
    String result;
    for (int i = index; i < bytes.size(); i++)
    {
        std::stringstream stream;
        stream << std::hex << bytes[i];
        std::string result(stream.str());
        result += result.c_str();
    }
    return result;
}

String BitConverter::ToString(Vector<byte> bytes, int from, int to)
{
    String result;
    for (int i = from; i < to; i++)
    {
        std::stringstream stream;
        stream << std::hex << bytes[i];
        std::string result(stream.str());
        result += result.c_str();
    }
    return result;
}
