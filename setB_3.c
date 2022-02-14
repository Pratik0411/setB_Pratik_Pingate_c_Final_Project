#include<stdio.h>
#include<string.h>

int intbinbefore(int n)
{
	int a[10], i, count=0; 
	for(i=0;n>0;i++)
	{
		a[i]=n%2;
		n=n/2;
		count++;
	}
	printf("Before: ");
	for(i=count-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
	printf("\n");
}

int intbinafter(int n)
{
	int a[10], i, count=0; 
	for(i=0;n>0;i++)
	{
		a[i]=n%2;
		n=n/2;
		count++;
	}
	printf("After: ");
	for(i=0;i<count;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
}

void main()
{
int n, b;
printf("Input: ");
scanf("%d", &n);
intbinbefore(n);
intbinafter(n);
}
