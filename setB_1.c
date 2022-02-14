#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,j,count=0,flag=0;
	printf("Input\n");
	scanf("%d",&n);
	char temp = 1;
	char s[n];
	char q[n];
	scanf("%s",s);
	printf("Output\n");
	for(i=0;i<n;i++)
	{
		q[i]=s[i];
	}
	for(i=0;i<n;i++)
	{
		flag =0;
		for(j=0;j<n;j++)
		{
			if(s[i]==s[j])
			{
				flag = flag+1;
			}
		}
		for(j=0;j<n;j++)
		{
			if((flag % 2) !=0)
			{
				if(s[i]==q[j] && i!=j && temp!=s[i])
				{
					q[j]=0;
				}
			}
			else
			{
				if(s[i]==q[j])
				{
					q[j]=0;
				}
			}
		}
		temp = s[i];
	}
	for(j=0;j<n;j++)
	{
		if(q[j]!=0)
		{
			printf("%c",q[j]);
			count++;
		}
	}
	if(count==0)
	{
		printf("Empty String");
	}
	printf("\n");
}
