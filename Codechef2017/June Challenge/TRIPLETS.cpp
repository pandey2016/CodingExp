#include<stdio.h>
int main()
{
	int T;
	scanf("%d\n",&T);
	while(T>0)
	{
		long long p,q,r;
		scanf("%lld%lld%lld",&p,&q,&r);
		
		long long a[p],b[q],c[r],i,j,d[p],e[r],k,h,x=0,l,y=0,m,count1=0,count2=0,count=0,sum[q],total=0,z;
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
		
		/*
		for(i=0; i < q; i++) 
   		{
      		for(j=i+1; j < q; )
      		{
        		 if(b[j] == b[i])
        		 {
           			 for(h=j; h < q;h++) 
            		{
               			b[h] = b[h+1];
            		}
           				 q--;
        		 }
       			 else {
          			  j++;
        		 }
     		}
  		}
  		for(i=0; i < p; i++) 
   		{
      		for(j=i+1; j < p; )
      		{
        		 if(a[j] == a[i])
        		 {
           			 for(h=j; h < p;h++) 
            		{
               			a[h] = a[h+1];
            		}
           				 p--;
        		 }
       			 else {
          			  j++;
        		 }
     		}
  		}
  		for(i=0; i < r; i++) 
   		{
      		for(j=i+1; j < r; )
      		{
        		 if(c[j] == c[i])
        		 {
           			 for(h=j; h < r;h++) 
            		{
               			c[h] = c[h+1];
            		}
           				 r--;
        		 }
       			 else {
          			  j++;
        		 }
     		}
  		}
  		
  		for(i=0; i <q ; i++)
  		    {
    		  printf("%d ", b[i]);
   	    	} 
		for(i=0; i < p; i++)
  		 {
   		   printf("%d ", a[i]);
  		 }
		for(i=0; i < r; i++)
  			{
      			printf("%d ", c[i]);
   			}
			   
		*/	   

		for(i=0;i<q;i++)
		{
			k=0,l=0;
			count =0;
			count1=0;
			count2=0;
			
			for(j=0;j<p;j++)
			{
				if(b[i]>=a[j])
				{
					d[k]=a[j]+b[i];
					k++;
					x=k;
				}
			}
			
			for(j=0;j<r;j++)
			{
				if(b[i]>=c[j])
				{
					e[l]=c[j]+b[i];
					l++;
					y=l;
				}
				
			}
			
			for(j=0;j<x;j++)
			{
				count1 = count1 +d[j];
			}
			for(j=0;j<y;j++)
			{
				count2 = count2 +e[j];
				count2=count2%1000000007;
			}
			
			count=count1*count2;
			count =count%1000000007;
			
			sum[i]=count;
			
		}
		for(i=0;i<q;i++)
		{
			total = total+sum[i];
		}
		z=total%1000000007;
		printf("%lld\n",z);
	/*	
		for(i=0;i<x;i++)
		{
			printf("%lld\n",d[i]);
		}
		for(i=0;i<y;i++)
		{
			printf("%lld\t",e[i]);
		}
		for(i=0;i<q;i++)
		{
			printf("%lld\n",sum[i]);
		}
	*/
		

		
		T--;
	}
	return 0;
}
