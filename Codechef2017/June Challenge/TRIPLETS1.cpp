#include<stdio.h>
void mergesort(long long b[],int i,int j);
void merge(long long b[],int i1,int j1,int i2,int j2);
int binarysearch(long long arr[],int l,int r, long long x);
int main()
{
	int T;
	scanf("%d\n",&T);
	while(T>0)
	{
		long long p,q,r;
		scanf("%lld%lld%lld",&p,&q,&r);
		
		long long a[p],b[q],c[r],i,j,d[p],e[r],k,h,x=0,l,y=0,m,count=0,sum[q],total=0,z;
		for(i=0;i<p;i++)
		{
			scanf("%lld",&a[i]);
		}
		for(i=0;i<q;i++)
		{
			scanf("%lld",&b[i]);
		}
		for(i=0;i<r;i++)
		{
			scanf("%lld",&c[i]);
		}
		mergesort(a,0,p-1);
		mergesort(b,0,q-1);
		mergesort(c,0,r-1);
	
	/*	for(i=0;i<p-1;i++)
		{
			a[i+1]=a[i] + a[i+1];
		}
		
		for(i=0;i<r-1;i++)
		{
			c[i+1]=c[i] + c[i+1];
		}
	*/	

		for(i=0;i<q;i++)
		{
			
			j=binarysearch( a,0,p-1,b[i]) +1 ;
			x=(j*b[i])+a[j-1];
			
			x=x%1000000007;
			k=binarysearch(c,0,r-1,b[i])+1;
			y=(k*b[i])+c[k-1];
			//y=y%1000000007;
			
			count= x*y;
			sum[i]=count%1000000007;
			
		}
		for(i=0;i<q;i++)
		{
			total = total+sum[i];
		}
		z=total%1000000007;
		printf("%lld\n",z);
		
	
	
	
		

		
		T--;
	}
	return 0;
}
int binarysearch(long long arr[],int l,int r,  long long x)
{
	if(r>=1)
	{
		int mid = l+(r-1)/2;
		if(arr[mid] > x && arr[mid-1]<=x)
		{
			return mid;
		}
		if(arr[mid]<=x)
		{
			return binarysearch(arr,mid+1,r,x);
		}
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



