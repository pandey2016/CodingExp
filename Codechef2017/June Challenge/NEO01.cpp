#include<stdio.h>
void mergesort(long long b[],int i,int j);
void merge(long long b[],int i1,int j1,int i2,int j2);
int main()
{
	int T;
	scanf("%d",&T);
	while(T>0)
	{
		int n,y=0,x=0,k=0,l=0,i,j;
		scanf("%d",&n);
		long long a[n],b[n],c[n],p,sum=0,sum2=0,total=0,count=0;
		for(i=0;i<n;i++)
		{
			
			scanf("%lld",&a[i]);
		}
	
		for(i=0;i<n;i++)
		{
		
			if(a[i]>=0)
			{
				count++;
				b[k]=a[i];
				k++;
				x=k;
			}
			else
			{
				c[l]=a[i];
				l++;
				y=l;
			}
		}
	/*	for(i=0;i<y;i++)
		{
			for(j=i+1;j<y;j++)
			{
				if(c[i]<=c[j])
				{
					r=c[i];
					c[i]=c[j];
					c[j]=r;
				}
			}
		}
*/
 mergesort(c,0,y-1);
	
		for(i=0;i<x;i++)
		{
			sum=sum+b[i];
		}
	
		p=count*sum;
		
	
		
		for(i=y-1;i>=0;i--)
		{
			sum = sum + c[i];
			count++;
			if(sum*(count) >= p )
						
			{
				p=sum*count;
				
								
			}
			else
			{
				break;
			}
		}
		
		for(j=i;j>=0;j--)
		{
			p = p + c[j];
		}
			printf("%lld\n",p);
		
		
		
		
	
		 
		
		
		T--;
	}
	return 0;
} 


void mergesort(long long b[],int i,int j)
{
    int mid;
        
    if(i<j)
    {
        mid=(i+j)/2;
        mergesort(b,i,mid);        //left recursion
        mergesort(b,mid+1,j);    //right recursion
        merge(b,i,mid,mid+1,j);    //merging of two sorted sub-arrays
    }
}
 
void merge(long long b[],int i1,int j1,int i2,int j2)
{
    long long temp[100000];    //array used for merging
    int i,j,k;
    i=i1;    //beginning of the first list
    j=i2;    //beginning of the second list
    k=0;
    
    while(i<=j1 && j<=j2)    //while elements in both lists
    {
        if(b[i]<b[j])
            temp[k++]=b[i++];
        else
            temp[k++]=b[j++];
    }
    
    while(i<=j1)    //copy remaining elements of the first list
        temp[k++]=b[i++];
        
    while(j<=j2)    //copy remaining elements of the second list
        temp[k++]=b[j++];
        
    //Transfer elements from temp[] back to a[]
    for(i=i1,j=0;i<=j2;i++,j++)
        b[i]=temp[j];
}



