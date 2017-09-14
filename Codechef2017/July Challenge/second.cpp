#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t>0)
	{
		char a[1000001],b[1000001],x;
		int l,i,j,count,max=0,y=0;
		scanf("%s",&a);
		l=strlen(a);
		count=1;
		j=0;
		for(i=0;i<l;i++)
		{
			if(a[i]!='=')
			{
				y++;
				break;
			}
		
		}
		if(y>0)
		{
		
		for(i=0;i<l;i++)
		{
			if(a[i]!='=')
			{
				x=a[i];
				b[j]=x;
				j++;
			}	
		}
		
	
		for(i=1;i<j;i++)
		{
		
				if(b[i]==b[i-1])
				{
					count++;
				}
				else
				{
					if(count>max)
					{
						max=count;
					}
					count =1;
				}
			
		}
		if(count>max)
		{
			max=count;
		}
		printf("%d\n",max+1);
	}
	else {
		printf("1\n");
	}
		t--;
		
	}
	return 0;
}
