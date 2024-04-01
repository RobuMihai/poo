#include "Number.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

Number::Number(const string& value, int base) : value(value), base(base), size(value.length()) {}

Number::~Number() {}

unsigned int Number::base10() const
{
    unsigned int result = 0, p = 1;
    for (int i = value.length() - 1; i >= 0; i--)
    {
        if (value[i] >= '0' && value[i] <= '9')
        {
            result += (value[i] - '0') * p;
        }
        else
        {
            result += (value[i] - 'A' + 10) * p;
        }
        p *= base;
    }
    return result;
}

bool Number::operator<(const Number& otherNumberNumber) const
{
    return base10() < otherNumberNumber.base10();
}

bool Number::operator>(const Number& otherNumberNumber) const
{
    return base10() > otherNumberNumber.base10();
}

bool Number::operator<=(const Number& otherNumberNumber) const
{
    return base10() <= otherNumberNumber.base10();
}

bool Number::operator>=(const Number& otherNumberNumber) const
{
    return base10() >= otherNumberNumber.base10();
}

bool Number::operator==(const Number& otherNumberNumber) const
{
    return base10() == otherNumberNumber.base10();
}

Number operator+(const Number& number1, const Number& number2)
{
    unsigned int sum = number1.base10() + number2.base10();
    stringstream ss;
    ss << sum;
    return Number(ss.str(), 10);
}

Number operator-(const Number& number1, const Number& number2)
{
    unsigned int dif = number1.base10() - number2.base10();
    stringstream ss;
    ss << dif;
    return Number(ss.str(), 10);
}

char Number::operator[](int index) const {
    if (index >= 0 && static_cast<unsigned int>(index) < size)
    {
        return value[index];
    }
    else
    {
        return '\0';
    }
}

Number::Number(const Number& otherNumberNumber) : value(otherNumberNumber.value), base(otherNumberNumber.base), size(otherNumberNumber.size) {}

Number& Number::operator=(const Number& otherNumberNumber)
{
    if (this != &otherNumberNumber)
    {
        value = otherNumberNumber.value;
        base = otherNumberNumber.base;
        size = otherNumberNumber.size;
    }
    return *this;
}

Number::Number(const Number&& otherNumber) noexcept : value(move(otherNumber.value)), base(otherNumber.base), size(otherNumber.size) {}

Number& Number::operator=(Number&& otherNumber) noexcept
{
    if (this != &otherNumber)
    {
        value = move(otherNumber.value);
        base = otherNumber.base;
        size = otherNumber.size;
    }
    return *this;
}

Number& Number::operator--()
{
    if (value.length() > 0)
    {
        value.erase(0, 1);
        size = value.length();
    }
    return *this;
}

Number Number::operator--(int)
{
    Number temp(*this);
    if (value.length() > 0)
    {
        value.pop_back();
        size = value.length();
    }
    return temp;
}

void Number::SwitchBase(int newBase) const
{
    unsigned int value10 = base10();
    string result;
    while (value10 != 0)
    {
        int rest = value10 % newBase;
        char digit = (rest < 10) ? ('0' + rest) : ('A' + rest - 10);
        result = digit + result;
        value10 /= newBase;
    }
    cout << result;
}

void Number::Print() const
{
    cout <<value;
}

int Number::GetDigitsCount() const
{
    return value.length();
}

int Number::GetBase() const
{
    return base;
}
