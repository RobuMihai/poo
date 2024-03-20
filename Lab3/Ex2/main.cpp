#include"Canvas.h"
#include<iostream>
using namespace std;

int main()
{
	Canvas n(30,20);
	n.DrawCircle(10, 10,10, '@');
	n.Print();
	return 0;
}