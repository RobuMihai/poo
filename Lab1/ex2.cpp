#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
using namespace std;

void sort(char *cuvinte[],int nr)
{
    int i,j,l;
    char *aux;
    for(i=0;i<nr-1;i++)
        for(j=i;j<nr;j++)
        {
            l=strlen(cuvinte[i])-strlen(cuvinte[j]);
            if(l<0||l==0&&strcmp(cuvinte[i],cuvinte[j])<0)
                {
                    aux=cuvinte[i];
                    cuvinte[i]=cuvinte[j];
                    cuvinte[j]=aux;
                }
        }
}

int main()
{
    int nr=0;
    int i;
    char *cuvinte[100];
	printf("Introduceti o propozitie: ");
	char propozitie[100];
    scanf("%[^\n]s", propozitie);//citeste pana intalneste caracterul \n (new line)
    char *p=strtok(propozitie," ");
    while(p!=NULL)
    {
        cuvinte[nr]=p;
        nr++;
        p=strtok(NULL," ");
    }

    sort(cuvinte,nr);

	for(i=0;i<nr;i++)
        printf("%s\n", cuvinte[i]);
    return 0;
}
