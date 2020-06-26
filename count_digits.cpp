#include<stdio.h>
int main()
{
	int n,lastd,count=0;
	printf("enter a no");
	scanf("%d",&n);
	while(n!=0)
	{
		lastd=n%10;
		count++;
		n=n/10;
}
	
	printf("count=%d",count);
}
