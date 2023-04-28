#include<stdio.h>
#include<stdio.h>

int main()
{
	int i,j,tmp;
	printf("Please enter data\n");
	scanf("%d",&tmp);

	for(i=0;i<32;i++)
	{
		if((tmp>>i)&1)
			printf("set bit is found in index %d\n",i);
	}
	return 0;
}
