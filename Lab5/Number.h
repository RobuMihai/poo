#pragma once

#include <iostream>
#include <string>
using namespace std;

class Number {
private:
    string value;
    int base;
    unsigned int size;

public:
    Number(const string& value, int base);
    Number(const Number& otherNumber);
    Number(const Number&& otherNumber) noexcept;
    Number& operator=(Number&& otherNumber) noexcept;
    Number& operator=(const Number& otheNumber);

    ~Number();

    unsigned int base10() const;
    bool operator < (const Number& otherNumber) const;
    bool operator > (const Number& otherNumber) const;
    bool operator <= (const Number& otherNumber) const;
    bool operator >= (const Number& otherNumber) const;
    bool operator == (const Number& otherNumber) const;

    friend Number operator + (const Number& number1, const Number& number2);
    friend Number operator - (const Number& number1, const Number& number2);
    char operator[](int index) const;
    Number& operator--();
    Number operator--(int);

    void SwitchBase(int newBase) const;
    void Print() const;
    int  GetDigitsCount() const;
    int  GetBase() const;
};