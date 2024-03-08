#include<iostream>
#include<string.h>
#include "GlobalFunctions.h"
#include "Student.h" 

int compareName(Student elev1, Student elev2)
{
    if (strcmp(elev1.GetName(), elev2.GetName()) < 0)
        return -1;
    else
        if (strcmp(elev1.GetName(), elev2.GetName()) == 0)
             return 0;
        else
            return 1;
}
int compareMath(Student elev1, Student elev2)
{
    if (elev1.GetGradeMath() > elev2.GetGradeMath())
        return 1;
    else
        if (elev1.GetGradeMath() == elev2.GetGradeMath())
            return 0;
        else
            return -1;
}
int compareEng(Student elev1, Student elev2)
{
    if (elev1.GetGradeEng() > elev2.GetGradeEng())
        return 1;
    else
        if (elev1.GetGradeEng() == elev2.GetGradeEng())
            return 0;
        else
            return -1;
}
int compareHis(Student elev1, Student elev2)
{
    if (elev1.GetGradeHis() > elev2.GetGradeHis())
        return 1;
    else
        if (elev1.GetGradeHis() == elev2.GetGradeHis())
            return 0;
        else
            return -1;
}
int compareAverage(Student elev1, Student elev2)
{
    if (elev1.GetAverage() > elev2.GetAverage())
        return 1;
    else
        if (elev1.GetAverage() == elev2.GetAverage())
            return 0;
        else
            return -1;
}