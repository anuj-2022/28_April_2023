#include<stdio.h>
#include<stdlib.h>


void add(int a,int b);
void sub(int a,int b);
void mul(int a,int b);
void dev(int a,int b);
void mod(int a,int b);

int main()
{
	int i,x,y;
	void (*p[5])(int,int);
	p[0]=&add;
	p[1]=&sub;
	p[2]=&mul;
	p[3]=&dev;
	p[4]=&mod;

	printf("Please enter the value :\n");
	scanf("%d%d",&x,&y);

	for(i=0;i<5;i++)
		(*p[i])(x,y);

	return 0;
}

void add(int a,int b)
{
	printf("Addition of %d and %d is %d\n",a,b,a+b);
}

void sub(int a,int b)
{
        printf("Subtraction of %d and %d is %d\n",a,b,a-b);
}

void mul(int a,int b)
{
        printf("Multiplication of %d and %d is %d\n",a,b,a*b);
}

void dev(int a,int b)
{
        printf("Division of %d and %d is %d\n",a,b,a/b);
}
void mod(int a,int b)
{
        printf("Modulus of %d and %d is %d\n",a,b,a%b);
}
