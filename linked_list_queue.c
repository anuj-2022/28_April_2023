#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *link;
}P;

P *rear=NULL,*front=NULL;

int enqueue()
{
	P *ptr=rear;
	P *tmp=malloc(sizeof(struct node));

	printf("Enter your data\n");
	scanf("%d",&tmp->data);
	tmp->link=NULL;
	if(front == NULL)
		front=tmp;
	else
		rear->link=tmp;
	rear=tmp;
}

int dequeue()
{
	if(front==NULL)
	{
		printf("queue underflow\n");
		return 0;
	}
	P* tmp=NULL;
		printf("%d element is dequeue\n",front->data);
	tmp=front;
	front=front->link;
}

int peek()
{
	if(front==NULL)
	{
		printf("queueu underflow\n");
		return 0;
	}
	printf("The peek element is %d\n",front->data);
}

int print()
{
	if(front==NULL)
	{
		printf("queue underflow\n");
		return 0;
	}
	P *ptr=front;
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->link;
	}
	printf("\n");
}
int main()
{
	int c;
	while(1)
	{
		printf("Please enter the choice\n1.enqueue\n2.dequeue\n3.peek\n4.print\n5.exit\n");
		scanf("%d",&c);
		switch(c)
                {
                        case 1: enqueue();
                                break;
                        case 2: dequeue();
                                break;
                        case 3: peek();
                                break;
                        case 4: print();
                                break;
                        case 5: exit(0);
                        default :
                                printf("Wrong choice please enter the write choice\n");
                }
        }
        return 0;

}

