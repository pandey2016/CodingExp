#include<stdio.h>
#include<string.h>
int main()

{
	int T;
	scanf("%d\n",&T);
	while(T>0)
	{
		char a[100000];
		int i,l,c1=0;
		scanf("%s",a);
		l=strlen(a);
		for(i=0;i<(l-1);i++)
		{
			if(a[i]=='E' && a[i+1]=='C')
			{
				c1++;
				break;
			}
			if(a[i]=='S' && a[i+1]=='C')
			{
				c1++;
				break;
			}
			if(a[i]=='S' && a[i+1]=='E')
			{
				c1++;
				break;
			}
		}
		if(c1>=1)
		{
			printf("no\n");
		}
		else {
			printf("yes\n");
		}
		
		
		T--;
		
	}
	return 0;
}
