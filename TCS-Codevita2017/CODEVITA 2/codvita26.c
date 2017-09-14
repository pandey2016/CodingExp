#include<stdio.h>

int prime();
int main()
{
	int t;
	scanf("%d",&t);
	while(t>0)
	{
		long l,r;
		scanf("%ld %ld",&l,&r);
		long i,j,arr[r+1],count=0,k=0,count2=0;
		for(i=l;i<=r;i++)
		{
			count=0;
			for(j=2;j<=i;j++)
			{
				if(prime(j)==1)
				{
					count++;
				}
			}
			arr[k]=count;
			k++;
		}
		for(i=0;i<k;i++)
		{
		//	printf("%d ",arr[i]);
		if(prime(arr[i])==1)
		{
			count2++;
		}
		}
		printf("%ld\n",count2);
		
		
		t--;
	}
	return 0;
}


int prime(int x)
{
    int n, i, flag = 0,count=0;
    n=x;
if(n>1){

   for(i=2; i<=n/2; ++i)
    {
        // condition for nonprime number
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
        count++;
    }
    
      return count;
}
