#include "Student.h"
#include "GlobalFunctions.h"
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
//set/get name
    Student elev1, elev2;
    char c1[] = "Gigel";
    char c2[] = "Cornel";
    elev1.SetName(c1);
    elev2.SetName(c2);
    printf("Primul elev: %s\n", elev1.GetName());
    printf("Al doilea elev: %s\n", elev2.GetName());

 //set grade
    elev1.SetGradeMath(8);
    elev2.SetGradeMath(6);

    elev1.SetGradeEng(5);
    elev2.SetGradeEng(9);

    elev1.SetGradeHis(6);
    elev2.SetGradeHis(6);
//get grade
    printf("\n%s are nota %f la matematica %f la engleza si %f la istorie\n", elev1.GetName(), elev1.GetGradeMath(), elev1.GetGradeEng(), elev1.GetGradeHis());
    printf("%s are nota %f la matematica %f la engleza si %f la istorie\n", elev2.GetName(), elev2.GetGradeMath(), elev2.GetGradeEng(), elev2.GetGradeHis());
//average
    printf("\n%s are media %f\n", elev1.GetName(), elev1.GetAverage());
    printf("%s are media %f\n", elev2.GetName(), elev2.GetAverage());
//compare
    if(compareMath(elev1, elev2)==1)
        printf("\n%s are nota la matematica mai MARE decat %s\n", elev1.GetName(), elev2.GetName());
    else
        if(compareMath(elev1,elev2)==-1)
            printf("\n%s are nota la matematica mai MICA e decat %s\n", elev1.GetName(), elev2.GetName());
        else
            printf("\n%s si %s au aceleasi note la matematica\n", elev1.GetName(), elev2.GetName());

    return 0;
}