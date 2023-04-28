#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a=30,b=50;
	int *const p=&a;
//	p=a;//invalid
	a=300;//valid
//	*p=500;//invalid

	printf("Value is %d\n",*p);
	return 0;
}
