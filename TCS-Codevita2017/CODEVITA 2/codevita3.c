#include<stdio.h>
int prime();
int main()
{
	int T;
	scanf("%d",&T);
	while(T>0)
	{
		char a[10];
		scanf("%s",a);
		int x,y,w,z,v,count=0,max=0,i;
		if(a[0]<=57)
		{
			x=a[0]-48;
		}
		else
		{
			x=a[0]-55;
		}
		if(a[1]<=57)
		{
			y=a[1]-48;
		}
		else
		{
			y=a[1]-55;
		}
		//printf("%d %d",x,y);
		if(x>=y)
		{
			max=x;
		}
		else
		{
			max=y;
		}
		//printf("%d\n",max);
		if(max>0)
		{
		
		int ar[40],k=0;
		for(i=max+1;i<=36;i++)
		{
			w=(i*x)+y;
			v=prime(w);
			//printf("%d  %d\n",w,v);
			if(v==1){
				ar[k]=i;
				k++;
			}
		}
		if(k>0)
		{
		for(i=0;i<k;i++)
		{
			printf("%d ",ar[i]);
		}
		}
		else
		{
			printf("NONE\n");
		}
		}
		else 
		{
			printf("NONE\n");
		}
			
		
		T--;
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
