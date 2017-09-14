#include<stdio.h>
#include<string.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T>0)
	{
		char a[4][100],b[4][100];
		int i,j,c,count=0;
		for(i=0;i<4;i++)
		{
			scanf("%s",&a[i][0]);
		}
		for(i=0;i<4;i++)
		{
			scanf("%s",&b[i][0]);
		}
		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			{
				c=strcmp(&a[i][0],&b[j][0]);
				if(c==0)
				count++;
				
			}
		}
		
		if(count>=2){
			printf("similar\n");
		}
		else{
		
		printf("disimilar\n");
	}
		
	T--;
	}
	return 0;
}
