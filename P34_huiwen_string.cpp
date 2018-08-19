#include<stdio.h>
#include<cstdlib>
#include<string.h>

int main()
{
	char a[101],s[101];
	int i,len,mid,next,top;
	
	gets(a);
	len=strlen(a);
	mid=len/2-1;
	
	top=0;
	for(i=0;i<=mid;i++)
		s[++top]=a[i];
	
	if(len%2==0)
		next=mid+1;
	else
		next=mid+2;
		
	//开始匹配
	for(i=next;i<=len-1;i++)
	{
		if(a[i]!=s[top]) break;
		top--;
	} 
	 
	//top为0,所有的字符均被匹配完成
	if(top==0)
		printf("YES");
	else
		printf("NO");
	
	//getchar();
	//getchar();
	system("pause");
	return 0; 
	
}
