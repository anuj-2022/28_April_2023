#include<stdio.h>
#include<stdlib.h>


void insert(int *b,int n);
void display(int *b,int n);

int main()
{
        int i,a[10];
        printf("Please enter the data\n");

        for(i=0;i<10;i++)
        scanf("%d",&a[i]);

        display(a,10);
        insert(a,10);
        display(a,10);

        return 0;


}

void insert(int *b,int n)
{
        int i,j,tmp;
        for(i=0;i<10;i++)
        {
                tmp=b[i];
                j=i-1;
                while(j>=0 && tmp>b[j])
                {
                        b[j+1]=b[j];
                        j--;
                }
                b[j+1]=tmp;
        }
}

