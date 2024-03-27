#define _CRT_SECURE_NO_WARNINGS
#include "Sort.h"
#include <iostream>
#include <cstdlib>
#include <cstring>
#include<time.h>
#include<stdio.h>
#include<cstdarg>
#include <algorithm>

using namespace std;

//random generated
Sort::Sort(int count, int min, int max) : count(count)
{
    vector = new int[count];  
    srand(unsigned(time(NULL)));
    for (int i = 0; i < count; i++)
        vector[i] = min + rand() % (max - min + 1);
}

//existing vector
Sort::Sort(const int *array, int count) : count(count)
{
    vector = new int[count];
    for (int i = 0; i < count; i++)
        vector[i] = array[i];
}

//variadic method
Sort::Sort(int count, ...)
{
    vector = new int[count];
    this->count = count;
    va_list args;
    va_start(args, count);
    for (int i = 0; i < count; i++)
        vector[i] = va_arg(args, int);
    va_end(args);
}

//string
Sort::Sort(char* string)
{
    if (string == nullptr)
    {
        count = 0;
        vector = nullptr;
        return;
    }

    char* temp = _strdup(string);
    if (temp == nullptr) 
    {
        count = 0;
        vector = nullptr;
        return;
    }

    count = 0;
    char* p = strtok(temp, ",");
    while (p != nullptr)
    {
        ++count;
        p = strtok(nullptr, ",");
    }

    vector = new int[count];

    int i = 0;
    p = strtok(string, ",");
    while (p != nullptr)
    {
        vector[i++] = atoi(p);
        p = strtok(nullptr, ",");
    }

    free(temp);
}

//
Sort::~Sort()
{
    delete[] vector;
}

void Sort::Swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}


void Sort::InsertSort(bool ascendent)
{
    for (int i = 1; i < count; i++)
    {
        int copy = vector[i];
        int j = i - 1;
        while (j >= 0 && vector[j] < copy)
        {
            vector[j + 1] = vector[j];
            j = j - 1;
        }
        vector[j + 1] = copy;
    }
}

int Sort::Partition(int p, int q)
{
    int x = vector[p];
    int i = p + 1;
    int j = q;

    while (i <= j)
    {
        if (vector[i] < x)
            i++;
        if (vector[j] >= x)
            j--;

        if (i < j && vector[i] > x && x > vector[j])
        {
            Swap(vector[i], vector[j]);
            i++;
            j--;
        }
    }

    int k = i - 1;
    vector[p] = vector[k];
    vector[k] = x;

    return k;
}

void Sort::QuickSort2(int p, int q)
{
    if (p < q)
    {
        int k = Partition(p, q);
        QuickSort2(p, k - 1);
        QuickSort2(k + 1, q);
    }
}



void Sort::QuickSort(bool ascendent)
{
    QuickSort2(0, count - 1); 
        int i = 0, j = count - 1;
        while (i < j) {
            Swap(vector[i], vector[j]);
            i++;
            j--;
        }
}

void Sort::BubbleSort(bool ascendent)
{
    int i, j;
    bool swapped;
    for (i = 0; i < count - 1; i++) {
        swapped = false;
        for (j = 0; j < count - i - 1; j++) {
            if (vector[j] < vector[j + 1]) {
                Swap(vector[j], vector[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}



void Sort::Print()
{
    for (int i = 0; i < count; i++)
        cout << vector[i] << " ";
    cout << endl;
}

int Sort::GetElementsCount()
{
    return count;
}

int Sort::GetElementFromIndex(int index)
{
    if (index >= 0 && index < count) {
        return vector[index];
    }
    else
        return -1; //daca index < 0 sau index >= count, vom returna -1
}

