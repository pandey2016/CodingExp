#include<stdio.h>
#include<string.h>
int main()
{
	int R;
	scanf("%d",&R);
	while(R>0)
	{
		int L,x=0,i,j,count=0;
		char a[1000],b[1000];
		scanf("%d",&L);
		scanf("%s",a);
		j=0;
		for(i=0;i<L;i++)
		{
			if(a[i]=='H')
			{
				b[j]='H';
				j++;
				x=j;
			}
			if(a[i]=='T')
			{
				b[j]='T';
				j++;
				x=j;
			}
		}
	printf("%d",x);
	int y=x-1;

	
	
		printf("%s",b);
	
		if(strlen(b)==0)
		{
			printf("Valid");
			
		}
		if(b[0]=='H' && b[y]=='T')
		{
			for(i=0;i<y;i++)
			{
				if((b[i]=='T' && b[i+1]=='H') || (b[i]=='H' && b[i+1]=='T'))
				{
					count++;
				}
			}
			if(count==y)
			{
				printf("Valid");
			}
		}
		else{
			printf("Invalid");
		}
		
		R--;
	}
	return 0;
}
