#include <string>

class Sort
{
private:
    int *vector;
    int count;

public:
    Sort(int count, int min, int max);//random generated
    Sort();//2
    Sort(const int *array, int count);//existing vector
    Sort(int count,...);//variadic method
    Sort(char *string);//string
    ~Sort();
    
    int Partition(int p, int q);
    void QuickSort2(int p, int q);
    void Swap(int& a, int& b);

    void InsertSort(bool ascendent = false);
    void QuickSort(bool ascendent = false);
    void BubbleSort(bool ascendent = false);
    void Print();
    int GetElementsCount();
    int GetElementFromIndex(int index);
};


