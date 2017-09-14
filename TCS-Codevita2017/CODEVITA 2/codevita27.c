#include<stdio.h>
int main()
{
	int N,n;
	scanf("%d",&N);
	n=N+1;
	int i,j,x[n*n],y=0,z=0,k=0,sum=0;
	for(i=2;i<=n;i++)
	{
		for(j=2;j<=n;j++)
		{
			x[k]=(n-i)*(n-j);
			k++;
		}
	}
	for(i=0;i<k;i++)
	{
		sum=sum+x[i];
	}
	y=n*n*(n-1)*(n-1)/4;
	z=sum+y;
	for(i=0;i<k;i++)
	{
		printf("%d ",x[i]);
	}
	
	printf("%d",y);
	printf("%d",z);
	return 0;
	
}
