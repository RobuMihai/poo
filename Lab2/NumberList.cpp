#include "NumberList.h"
#include<stdio.h>	

void NumberList::Init()
{
	this->count = 0;
}
bool NumberList::Add(int x)
{
	if (this->count >= 10)
		return false;
	this->numbers[count] = x;
	this->count++;
}
void NumberList::Sort()
{
	for(int i=0;i<this->count;i++)
		for(int j=i;j<this->count;j++)
			if (numbers[i] > numbers[j])
			{
				int aux = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = aux;
			}
}
void NumberList::Print()
{
	printf("\n");
	for (int i = 0;i < this->count;i++)
		printf("%d ", this->numbers[i]);
}