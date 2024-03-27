#include "Sort.h"
#include <iostream>
#include <vector>
#include<string>

using namespace std;

int main() 
{
    Sort s1(10, 1, 9999);//random generated
    cout << "vector generat random: ";
    s1.Print();

    cout << "sortare prin InsertSort: ";
    s1.InsertSort();
    s1.Print();

    int vec[] = {6,8,2,9,0};
    Sort s3(vec, 5);//existing vector
    cout << endl<<"array + count ";
    s3.Print();

    cout << "sortare prin BubbleSort: ";
    s3.BubbleSort();
    s3.Print();

    Sort s4(5,7,5,8,9,3);//variadic method
    cout << endl<<"Variadic parameters: ";
    s4.Print();
    s4.InsertSort();
    cout << "sortare prin InsertSort: ";
    s4.Print();

    char s[] = "6,8,2,3,4,1,5,7,0,9";//string
    Sort s5(s);
    cout << endl<< "String: ";
    s5.Print();

    cout << "Elements count: " << s5.GetElementsCount();
    cout<<endl << "Elementul de la indexul 2: " << s5.GetElementFromIndex(2)<<" (indexarea incepe de la 0)" << endl;

    cout << "sortare prin QuickSort: ";
    s5.QuickSort();
    s5.Print();

    return 0;
}
