#include <stdio.h>
#include <stdlib.h>

int fak(int);

int main()
{
    int x;
    printf("bir sayi giriniz");
    scanf("%d",&x);
    printf("girilen sayinin faktoriyeli : %d",fak(x));
}

int fak(int a)
{
    int fakt=1,b;
    for(b=a;1<=b;b--)
        fakt=fakt*b;
    return fakt;
}
