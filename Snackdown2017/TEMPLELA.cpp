#include<stdio.h>
int main()
{
	
	int S;
	scanf("%d\n",&S);
	while(S>0)
	{
		int N,h[10000],i,count=0;
		scanf("%d\n",&N);
		for(i=0;i<N;i++)
		{
			scanf("%d",&h[i]);
		}
		if(h[0]==1 && (N%2)!=0 )
		{
			for(i=0;i<(N-1)/2;i++)
			{
				if((h[i+1]==h[i]+1) && (h[N-2-i]==h[N-1-i]+1))
				{
					count++;
				}
				
			}
		}
		if(count ==(N-1)/2)
		{
			printf("yes\n");
			
		}
		else
		{
			printf("no\n");
		}
		
		
		
		S--;
	}
	
	return 0;
	
}
