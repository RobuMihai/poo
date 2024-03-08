#include "Student.h"
#include<stdio.h>
#include<string.h>

void Student::SetName(char nume[100])
{
    strcpy_s(this->name, nume);
}
char* Student::GetName()
{
    return this->name;
}

void Student::SetGradeMath(float nota)
{
    this->grade_math = nota;
}
float Student::GetGradeMath()
{
    return this->grade_math;
}

void Student::SetGradeEng(float nota)
{
    this->grade_eng = nota;
}
float Student::GetGradeEng()
{
    return this->grade_eng;
}

void Student::SetGradeHis(float nota)
{
    this->grade_his = nota;
}
float Student::GetGradeHis()
{
    return this->grade_his;
}

float Student::GetAverage()
{
    return (this->grade_math + this->grade_eng + this->grade_his) / 3;
}