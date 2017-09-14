#include<stdio.h>
int main()
{
	int T;
	scanf("%d\n",&T);
	while(T>0)
	{
		long A,B,i,x=0,y=0,l=0,b=0;
		scanf("%d",&A);
		scanf("%d",&B);
		
		if(B>1 && A>0){
		
		for(i=1;i<A;i++)
		{
			if(i%2!=0){
				x=x+i;
				if(x<=A)
				{
					l++;
				}
			}
		}		
		for(i=2;i<=B;i++)
		{
			if(i%2==0){
				y=y+i;
				if(y<=B)
				{
					b++;
				}
			}
		}
		if(l > b)
		{
			printf("Limark\n");
			
		}
		else if (l <= b) 
		{
			printf("Bob\n");
			
		}
	}
if(A>0 && B==1)
{
	printf("Limark\n");
}

		
		
		T--;
		
	}
	return 0;
}
