//Fibonacci Series
#include<stdio.h>
int main()
{
	int n, i, a=0, b=1, c;
	printf("Enter the nth position of the series: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",a);
		c = a + b;
		a=b;
		b=c;
	}
	
	return 0;
}
