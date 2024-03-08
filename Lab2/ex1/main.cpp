#include"NumberList.h"
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int nr;
	NumberList n;
	n.Init();
	for (int i = 0;i <= 11;i++)
	{
		cin >> nr;
		if (n.Add(nr) == false)
		{
			printf("\nati atins limita de numere");
			break;
		}
	}
	n.Print();
	n.Sort();
	n.Print();
	return 0;
}