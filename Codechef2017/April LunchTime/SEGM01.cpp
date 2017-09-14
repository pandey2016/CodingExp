#include<stdio.h>
#include<string.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T>0)
	{
		char str[1000001];
		int i,l,x=0,count=0,count0=0,count1=0;
		scanf("%s",str);
		l=strlen(str);
		for(i=0;i<(l-1);i++)
		{
			if(str[i]=='1' && str[i+1]=='0')
			{
				x=i+1;
				break;
			}
		}
	if(x>0){
		
		for(i=x;i<=(l);i++)
		{
			if(str[i]=='1')
			{
				count++;
				break;
			}
			
		}
	}

	else{ 
		for(i=x;i<=l;i++)
		{
	
			if((str[i]=='0' && str[i+1]=='1') || (str[i]=='1'))
			{
				count1++;
				break;
			}
			else if(str[i]=='0' )
			{
				count0++;
			}
		}
	}
	
		if((count==0 || count1>=1) &&  count0!=(l) )
		{
			printf("YES\n");
		}
	
		else if(count>=1 || count0==(l))
		{
			printf("NO\n");
			
		}
		
		
		
		T--;
	}
	return 0;
}
