#include<stdio.h>
#include<stdlib.h>

struct queue
{
	int data[1000];
	int head;
	int tail;
};

struct stack
{
	int data[10];
	int top; 
};

int main()
{
	struct queue q1,q2;
	struct stack s;
	
	//初始化
	q1.head=1;//q1指代小哼 
	q1.tail=1;
	
	q2.head=1;//q2指代小哈 
	q2.tail=1;
	
	s.top=0;
	
	for(int i=1;i<=6;i++)
	{
		scanf("%d",&q1.data[q1.tail]);
		q1.tail++; 
	 } 
	 
	for(int j=1;j<=6;j++)
	{
		scanf("%d",&q2.data[q2.tail]);
		q2.tail++;
	}
	
	//小哼先出牌
	int t=q1.data[q1.head];
	
	
	
	
	
	
	
	system("pause"); 
	return 0;
}


