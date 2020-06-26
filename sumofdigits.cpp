#include<stdio.h>
int main()
{
	int n,lastd,count=0,sum=0;
	printf("enter a no");
	scanf("%d",&n);
	while(n!=0)
	{
		lastd=n%10;
		count++;
		sum=sum+lastd;
		n=n/10;
}
	
	printf("count=%d\n",count);
	printf("sum=%d",sum);
}
