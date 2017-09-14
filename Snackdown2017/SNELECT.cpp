#include<stdio.h>
#include<string.h>
int main()
{
	int T;
	scanf("%d\n",&T);
	while (T>0)
	{
		char a[1000];
		int i,counts=0,countm=0,x=0;
		scanf("%s",a);
		x=strlen(a);
		for(i=0;i<x-1;i++)
		{
			if(a[i]=='s' && a[i+1]=='m')
			{
				a[i]= 'S';
				a[i+1]='M';
			}
			if(a[i]=='m' && a[i+1]=='s')
			{
				a[i]= 'M';
				a[i+1]='S';
			}
		}
		for(i=0;i<x;i++)
		{
			if(a[i]=='s')
			{
				counts++;
			}
			if(a[i]=='M' || a[i]=='m')
			{
				countm++;
			}
		}
		if(countm>counts)
		{
			printf("mongooses\n");
		}
		if(countm<counts)
		{
			printf("snakes\n");
			
		}
		if(countm==counts)
		{
			printf("tie\n");
		}
		
		T--;
		
	}
}
