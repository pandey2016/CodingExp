#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t>0)
	{
		
	
	char name[100];
scanf("%[^\n]s",name);
	int l,i;
	l=strlen(name);
	name[l-1]='\0';
	for(i=0;i<l;i++)
	{
		printf("%c",name[i]);
	}
	t--;
	}
	return 0;
}
