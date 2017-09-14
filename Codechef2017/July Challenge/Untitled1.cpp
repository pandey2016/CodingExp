#include<stdio.h>
#include<math.h>
int main()
{
	long long A,B,i,j,z,y,count=0;
	scanf("%lld%lld",&A,&B);
	for(i=1;i<=A;i++)
	{
		for(j=1;j<=B;j++)
		{
			z=(i*i)+j;
			y=sqrt(z);
			if(y*y==z)
			{
				count++;
			}
		}
	}
	printf("%lld\n",count);
	return 0;
	
}
