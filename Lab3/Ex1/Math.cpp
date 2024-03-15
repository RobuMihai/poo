#include "Math.h"
#include<stdarg.h>

int Math::Add(int x, int y)
{
	return x + y;
}
int Math::Add(int x, int y, int z)
{
	return x + y + z;
}
int Math::Add(double x, double y) // se pierde valoare de dupa virgula deoarece se face conversie din tipul double in int
{
	return x + y;
}
int Math::Add(double x, double y, double z)
{
	return x + y + z;
}
int Math::Mul(int x, int y)
{
	return x * y;
}
int Math::Mul(int x, int y, int z)
{
	return x * y * z;
}
int Math::Mul(double x, double y)
{
	return x * y;
}
int Math::Mul(double x, double y, double z)
{
	return x * y * z;
}
int Math::Add(int count, ...)
{
	int i, s=0;
	va_list vl;
	va_start(vl, count);
	for (i = 1;i <= count;i++)
		s+= va_arg(vl, int);
	va_end(vl);
	return s;
}
char* Math::Add(const char* s1, const char* s2)
{
	int l1 = 0, l2 = 0, i,j;
	if (s1 == nullptr || s2 == nullptr)
		return nullptr;
	while (s1[l1] != '\0')
		l1++;
	while (s2[l2] != '\0')
		l2++;
	char* s3 = new char[l1 + l2 + 1];
	for (i = 0;i < l1;i++)
		s3[i] = s1[i];
	for (j = 0;j < l2;j++)
	{
		s3[i] = s2[j];
		i++;
	}
	s3[i] = '\0';
	return s3;
}