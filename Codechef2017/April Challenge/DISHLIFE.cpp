#include<stdio.h>
#include<string.h>
 
int main()
{
	
	int t,n,k,x,i,j,b,count;
	scanf("%d",&t);
	while(t--)
	{
		count = 0;
		scanf("%d %d",&n,&k);
		int grp[k];
		for(i=0;i<k;i++)
		{
			grp[i] = 0;
		}
		for(i=0;i<n;i++)
		{
			count = 0;
			scanf("%d",&x);
			int arr[x];
			for(j=0;j<x;j++)
			{
				scanf("%d",&arr[j]);
				grp[arr[j]-1] = 1;
			}
		
			if(i == n-1)
			{
				for(j=0;j<k;j++)
				{
					if(grp[j] == 0)
					{count++;break;}
				}
				if(count == 0)
				printf("all\n");
				else
				printf("sad\n");
			}
			else
			{
				for(j=0;j<k;j++)
				{
					if(grp[j] == 0)
					{count++;break;}
				}
				if(count == 0)
				{
				for(b=i+1;b<n;b++)
				{
					scanf("%d",&x);
					int arr[x];
					for(j=0;j<x;j++)
					{
						scanf("%d",&arr[j]);
					}
				}
				i = n - 1;
				printf("some\n");		
				}
			}
		}
	}
} 
