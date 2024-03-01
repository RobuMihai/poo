#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	printf("Introduceti o propozitie: ");
	char cuvant[100];
	while (scanf("%s", cuvant))
        {
            printf("%s\n", cuvant);
        }

	printf("-----------------------------------------------------");
	printf("\n\n");
}
