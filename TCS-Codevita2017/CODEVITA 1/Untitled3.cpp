#include<stdio.h>
#include<algorithm>
#include<string.h>
void BFS(int current, int totalSum, int n, int k, int shops[])

{
	if(current >= n)
	{
		maxx = max(maxx, sum);
		return;
	}
	BFS(current + 1, totalSum, n, k, shops);
	BFS(current + k + 1, totalSum + shops[current], n, k, shops);
}
int max = -1;
int main()
{
	char a[100];
	scanf("%s",a);
	int i,p=0,p1=0,z=0,m,n;
	z=strlen(a);
	for(i=0;i<z;i++)
	{
		if(a[i]==',')
		{
			m=p;
			p=0;
		}
		else
		{
			p1=(int)(a[i]-'0');
			p=p*10+p1;
		}
	}
	n=p;
	int b[m];
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<m,i++)
	{
	BFS(i,,m,n,b[m])	
	}
	
}
