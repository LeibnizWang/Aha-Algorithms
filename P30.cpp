#include<stdio.h>

struct queue
{
	int data[100];//��������
	int head;
	int tail; 
};

int main()
{
	struct queue q;
	int i;
	//��ʼ������
	q.head=1;
	q.tail=1;
	for(i=1;i<=9;i++)
	{
		//����������в���9����
		scanf("%d",&q.data[q.tail]);
		q.tail++; 
	} 
	
	while(q.head<q.tail)
	{
		//��ӡ���ײ������׳���
		printf("%d",q.data[q.head]);
		q.head++; 
		
		//���µĶ�����ӵ���β
		q.data[q.tail]=q.data[q.head];
		q.tail++;
		
		//�����׳���
		q.head++;
		 
	}
	
	
	getchar();
	getchar();
	return 0;
}
