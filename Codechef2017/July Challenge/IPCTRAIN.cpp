#include<stdio.h>
void mergesort(long long b[],long long c[],long long d[],long long i,long long j);
void merge(long long b[],long long c[],long long d[],long long i1,long long j1,long long i2,long long j2);
void insertion(long long a[],long long b[],long long c[],long long n);



int main()
{
	int t;
	scanf("%d\n",&t);
	while(t>0)
	{
		long long N,l,d,i,x,y=0;		
		scanf("%lld%lld\n",&N,&l);
		long long D[N],T[N],S[N];
		for(i=0;i<N;i++)
		{
			scanf("%lld",&D[i]);
			scanf("%lld",&T[i]);
			scanf("%lld",&S[i]);
		}
	//insertion(S,T,D,N);
	mergesort(S,T,D,0,N-1);
	d=l;	
	for(i=0;i<N;i++)
	{
		if(d>0)
		{
			if(D[i]<=l)
			{
				
				if(T[i]<=(l-D[i]+1) && T[i]<=d)
				{
					d=d-T[i];
				}
				else if(T[i]<=(l-D[i]+1) && T[i]>d)
				{
					x=T[i]-d;
					y=y+x*S[i];
					d=d-(T[i]-x);
				}
				
				else if(T[i]>(l-D[i]+1) && T[i]<d)
				{
					x=T[i]-(l-D[i]+1);
					y=y+x*S[i];
					d=d-(T[i]-x);
				}
				else if(T[i]>(l-D[i]+1) && T[i]>=d)
				{
					if((l-D[i]+1)<d)
					{
						
					x=T[i]-(l-D[i]+1);
					y=y+x*S[i];
					d=d-(T[i]-x);
					}	
					else
					{
					x=T[i]-d;
					y=y+x*S[i];
					d=d-(T[i]-x);
					}
				
				}
			}
		}
		else
		{
			y=y+T[i]*S[i];
		}
			
		
	}
	printf("%d\n",y);
		
	t--;
		
	}
	return 0;
	
}


void insertion(long long a[],long long b[],long long c[],long long n)
{
	int i,key,key1,key2,j;
	for(i=0;i<n;i++)
	{
		key = a[i];
		key1=b[i];
		key2=c[i];
		j=i-1;
		
		while(j>=0 && a[j]<key)
		{
			a[j+1]=a[j];
			b[j+1]=b[j];
			c[j+1]=c[j];
			j=j-1;
		}
		a[j+1]=key;
		b[j+1]=key1;
		c[j+1]=key2;
	}
}





void mergesort(long long b[],long long c[],long long d[],long long i,long long j)
{
    long long mid;
        
    if(i<j)
    {
        mid=(i+j)/2;
        mergesort(b,c,d,i,mid);        //left recursion
        mergesort(b,c,d,mid+1,j);    //right recursion
        merge(b,c,d,i,mid,mid+1,j);    //merging of two sorted sub-arrays
    }
}
 
void merge(long long b[],long long c[],long long d[],long long i1,long long j1,long long i2,long long j2)
{
    long long temp[100000],temp1[100000],temp2[100000];    //array used for merging
    long long i,j,k;
    i=i1;    //beginning of the first list
    j=i2;    //beginning of the second list
    k=0;
    
    while(i<=j1 && j<=j2)    //while elements in both lists
    {
        if(b[i]<b[j])
        {
	
            temp[k++]=b[i++];
            temp1[k++]=c[i++];
            temp2[k++]=d[i++];
        }
            
        else
        {
        
            temp[k++]=b[j++];
            temp1[k++]=c[j++];
            temp2[k++]=d[j++];
        }
    }
    
    while(i<=j1)    //copy remaining elements of the first list
     
	 {
	 	temp[k++]=b[i++];
        temp1[k++]=c[i++];
        temp2[k++]=d[i++];
     }
    while(j<=j2)    //copy remaining elements of the second list
    {
    
        temp[k++]=b[j++];
        temp1[k++]=c[j++];
        temp2[k++]=d[j++];
	}	
    //Transfer elements from temp[] back to a[]
    for(i=i1,j=0;i<=j2;i++,j++)
    {
    
        b[i]=temp[j];
        c[i]=temp1[j];
        d[i]=temp2[j];
    }
}

