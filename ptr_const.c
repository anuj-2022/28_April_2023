#include<stdio.h>
#include<stdlib.h>

int main()
{
        int a=10,b=20;
        const int *p;
        p=&a;
        p=&b;
//	b=100;
//        *p=301;//noit allowed assign the value

        printf("Value id %d",*p);
        return 0;
} 
