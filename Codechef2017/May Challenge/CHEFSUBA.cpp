#include<stdio.h>
#include<string.h>

void rotate(long arr[], long n)
{
   int y = arr[n-1], i;
   for (i = n-1; i > 0; i--)
      arr[i] = arr[i-1];
   arr[0] = y;
}

int main()
{
	long N,K,P;
	scanf("%d%d%d",&N,&K,&P);
	long a[N],c[N];
	char s[P];
	int i,j,l,x=0,y=0,count,z=0,max=0;
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
		
	}
	scanf("%s",s);
	x=strlen(s);
	for(l=0;l<=(N-K);l++)
	{
		count=0;
		for(j=l;j<K+l;j++)
		{
			if(a[j]==1)
			{
				count++;
			}
		}
		c[l]=count;
	}
	for(j=0;j<x;j++)
	{
	if(s[j]=='!')
		{
			rotate(a,N);
			
		for(i=0;i<K;i++)
		{ 
			
			if(a[i]==1)
			{
				z++;
			}
		}
		
			
		for(i=(N-K);i>0;i--)
			{
			c[i] = c[i-1];
			}
	
		c[0]=z;
		z=0;
	}
	if(s[j]=='?')
	{
		max=c[0];
		for(i=0;i<=(N-K);i++)
		{
			if(max<c[i])
			{
				max=c[i];
			}
		}
		
		printf("%d\n",max);
		
	}
	
	}
return 0;
}


 

