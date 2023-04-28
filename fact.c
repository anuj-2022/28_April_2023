#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,n,f=1;
	printf("Please enter a number\n");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
		f=f*i;

	printf("Factorial of %d! is %d\n",n,f);
	return 0;
}
