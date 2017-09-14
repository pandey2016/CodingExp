#include<stdio.h>
int main()
{
	int T;
	scanf("%d\n",&T);
	while(T>0)
	{
		long n,i,j,count=0,countx=0,county=0,countz=0,total=0,countw=0,x;
		scanf("%d",&n);
		char a[2][n];
		for(i=0;i<2;i++)
		{
		
			scanf("%s",a[i]);
		
		}
		
		for(i=0;i<n;i++)
		{
			if(a[0][i]=='*')
			{
				count++;
			}
			if(a[1][i]=='*')
			{
				count++;
			}
		}
		if(count<=1)
		{
			printf("0\n");
		}
		if(count>1)
		{
			for(i=0;i<n;i++)
			{
				if(a[0][i]=='*' && a[1][i]=='*')
				{
					countx = 1;
					break;
				}
			}
			for(i=0;i<n-1;i++)
			{
				if(a[0][i]=='*')
				{
					countw++;
					x=0;
					y=i;
				}
				if(a[1][i]=='*')
				{
					countw++;
					x=1;
					y=i;
				}
				if(a[0][i]=='*' && a[1][i]=='.')
				{
					if((a[0][i+1]=='*' && a[1][i+1]=='*') || (a[0][i+1]=='*' && a[1][i+1]=='.') )
					{
						county++;
					}
					if(countx <1 && (a[0][i+1]=='.' && a[1][i+1]=='*'))
					{
						county++;
					}
				}
				if(a[0][i]=='*' && a[1][i]=='*')
				{
					if((a[0][i+1]=='*' && a[1][i+1]=='*') || (a[0][i+1]=='*' && a[1][i+1]=='.') || (a[0][i+1]=='.' && a[1][i+1]=='*'))
					{
						county++;
					}
				
				}
				if(a[0][i]=='.' && a[1][i]=='*')
				{
					if((a[0][i+1]=='.' && a[1][i+1]=='*') || (a[0][i+1]=='*' && a[1][i+1]=='*'))
					{
						county++;
					}
					if(countx<1 && (a[0][i+1]=='*' && a[1][i+1]=='.'))
					{
						county++;
					}
				}
				if(a[0][i]=='.' && a[1][i]=='.')
				{
					if((a[0][i+1]=='*' && a[1][i+1]=='*') || (a[0][i+1]=='*' && a[1][i+1]=='.' && x==0) || (a[0][i+1]=='.' && a[1][i+1]=='*' && x==1))
					{
					if(countz >=1 || county>=1 || countw>=1)
					{
						county++;
					}	
					if(county<1)
					{
						countz++;
					}
				
					}
				}
			}
			
			total=countx+county;
			printf("%d\n",total);
		}
		
		
		
		
		
		
		T--;
	}
	return 0;
	
}
