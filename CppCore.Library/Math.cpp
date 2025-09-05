#include "pch.h"
#include "Math.h"

double Math::Round(double number)
{
    long long integerpart = (long long)number;
    double decimal_part = number - integerpart;

    if (number > 0 )
    {
        if (decimal_part >= 0.5)
        {
            return integerpart + 1;
        }
        else
        {
            return integerpart;
        }
    }
    else
    {
        if (decimal_part <= -0.5)
        {
            return integerpart -1;
        }
        else
        {
            return integerpart;
        }
    }
}

double Math::Abs(double number)
{
    if (number > 0)
    {
        return number;
    }
    else
    {
        return -number;
    }
}

double Math::Pow(double number, double power) 
{
    double value;
    if (number >= 0 )
    {
       value = 1;
    }
    else
    {
        value = -1;
    }
    
    for (int i = 0; i < power; i++)
    {
       value *= number;
    }
    return value;
}

double Math::Sqrt(double number)
{
    double x = number;

    double root;
    int count = 0;

    while (true)
    {
        ++count;
        root = 0.5 * (x + (number / x));

        if (Abs(root-x)< 0.00001)
        {
            break;
        }

        x = root;
    }
    return root;
}

double Math::Log2(double number)
{
    double log_e_2 = 0.693147; 
    
    return naturalLog(number) / log_e_2;
}

double Math::Log10(double number)
{
    return naturalLog(number) / naturalLog(10);
}

double Math::Log(double number, double l)
{
    return naturalLog(number) / naturalLog(l);
}

double Math::exp(double x)
{
    double sum = 1.0;  
    double term = 1.0; 
    int n = 1;

   
    while (term > 1e-7) 
    {
        term *= x / n;  
        sum += term;    
        n++;
    }

    return sum;
}

double Math::naturalLog(double x)
{
    if (x <= 0) 
    {
        
        return -1;
    }

    double tolerance = 0.000001; 
    double guess = x - 1;  

    while (true) 
    {
        double new_guess = guess - (exp(guess) - x) / exp(guess);
        if (Abs(new_guess - guess) < tolerance) 
        {
            break;
        }
        guess = new_guess;
    }
    return guess;
}

