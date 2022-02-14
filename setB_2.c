#include<stdio.h>
#include<string.h>
char name[10];
int count=0;
struct family
{
	char child[10];
	char father[10];
}a[6];

void countchild(char *name)
{
	for(int j=1;j<6;j++)
	{
		if(strcmp(a[j].father, name)==0)
		{
			count++;
			countchild(a[j].child);
		}
	}
}

void main()
{
	int i=1;
	FILE *fp;
	fp=fopen("file.txt","r");
	while(!feof(fp))
	{
		fscanf(fp, "%s", a[i].child);
		fscanf(fp, "%s", a[i].father);
		i++;
	}
	fclose(fp);
	printf("Input: ");
	scanf("%s", name);
	
	for(int p=1;p<6;p++)
	{
		if(strcmp(a[p].father, name)==0)
		countchild(a[p].child);
	}
	printf("Output: %d\n", count/2);
}
