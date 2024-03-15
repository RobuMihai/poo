#include<iostream>
#include"Math.h"
using namespace std;
int main()
{
	int x = 5, y = 10, z = 15;
	double a = 5, b = 10.5, c = 15.49;
	Math n;
	printf("\n x+y= %d", n.Add(x, y));
	printf("\n x+y+z= %d", n.Add(x, y,z));
	printf("\n a+b= %d", n.Add(a, b)); 
	printf("\n a+b+c= %d", n.Add(a, b, c));
	printf("\n x*y= %d", n.Mul(x, y));
	printf("\n x*y+z= %d", n.Mul(x, y, z));
	printf("\n a*b= %d", n.Mul(a, b)); 
	printf("\n a*b*c= %d", n.Mul(a, b, c));
	int nr = 3;
	printf("\n x+y+z=%d", n.Add(nr, x,y,z));
	const char* s1 = "Hello";
	const char* s2 = "World";
	printf("\n Hello + World= %s", n.Add(s1,s2));
	return 0;
}