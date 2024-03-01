#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main()
{
    int x=0;
    FILE *f;
    f=fopen("in.txt","r");
    if(f==NULL)
        printf("Eroare la deschiderea fisierului\n");
    else {
            printf("Am deschis fisierul\n");
            char s[200];
            while(fgets(s,200,f))
            {
                s[strlen(s)-1]=NULL;
            }
    }
    printf("%d \n",x);
    return 0;
}
