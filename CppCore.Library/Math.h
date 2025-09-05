#pragma once
class Math
{
public:
	static double Round(double number);
	static double Abs(double number);
	static double Pow(double number, double power);
	static double Sqrt(double number);
	static double Log2(double number);
	static double Log10(double number);
	static double Log(double number, double l);
	static double exp(double x);
private:
	static double naturalLog(double x);
};

