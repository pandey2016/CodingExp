#include<stdio.h>

void mergesort(int b[],int i,int j);
void merge(int b[],int i1,int j1,int i2,int j2);
int main()
{
	int T;
	scanf("%d",&T);
	while(T>0)
	{
		long N;
		scanf("%ld",&N);
		 a[2*N],i,j,M=0,l=0;
		l=2*N;
	for(i=0;i<(l);i++)
		{
			scanf("%d",&a[i]);
		}
		
		 mergesort(a,0,l-1);
	
    M=a[((2*N)+N-1)/2];
    printf("%d\n",M);
    for(i=0;i<N;i++)
    {
    	printf("%d\t%d\t",a[i],a[N+i]);
    }
		
		
		T--;
		
	}
	return 0;
}


void mergesort(int b[],int i,int j)
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
 
void merge(int b[],int i1,int j1,int i2,int j2)
{
    int temp[100000];    //array used for merging
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

