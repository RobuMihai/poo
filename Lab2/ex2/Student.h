#pragma once
class Student
{
    char name[100];
    float grade_math;
    float  grade_eng;
    float grade_his;

public:
    void SetName(char cuvant[100]);
    char* GetName();

    void SetGradeMath(float nota);
    float GetGradeMath();

    void SetGradeEng(float nota);
    float GetGradeEng();

    void SetGradeHis(float nota);
    float GetGradeHis();

    float GetAverage();
};