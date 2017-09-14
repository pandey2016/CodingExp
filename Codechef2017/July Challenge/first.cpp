#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t>0)
	{
		char a[100],b[100],c[100];
		string arr;
		getline(cin,arr);
		int l=0,i,p=0,n=0,x=0,y=0,z=0,m=0,k=0,r=0;
		l=arr.length();
		p=0;
		for(i=0;i<l;i++)
		{
			if(arr[i]!=' ')
			{
				if(p==0)
				{
					a[k]=arr[i];
					k++;
				}
				else if(p==1)
				{
					b[n]=arr[i];
					n++;
					
				}
				else if(p==2)
				{
					c[m]=arr[i];
					m++;
				}
			}
			else
			{
				p++;
			}
		}
	
		for(i=0;i<k;i++)
		{
		//	printf("%c",a[i]);
		}
		
		for(i=0;i<n;i++)
		{
		//	printf("%c",b[i]);
		}
		
		for(i=0;i<m;i++)
		{
		//	printf("%c",c[i]);
		}
		if(p==0)
		{
			
			if(a[0]>=97 && a[0]<=122)
			{
				a[0]=a[0]-32;
			}
			for(i=1;i<k;i++)
			{
				if(a[i]>=65 && a[i]<=90)
				{
					a[i]=a[i]+32;
				}
			}
			for(i=0;i<k;i++)
			{
				printf("%c",a[i]);
			}
			printf("\n");
		}
		else if(p==1)
		{
			
			if(a[0]>=97 && a[0]<=122)
			{
				a[0]=a[0]-32;
			}
		    printf("%c. ",a[0]);
			
			if(b[0]>=97 && b[0]<=122)
			{
				b[0]=b[0]-32;
			}
			for(i=1;i<n;i++)
			{
				if(b[i]>=65 && b[i]<=90)
				{
					b[i]=b[i]+32;
				}
			}
			for(i=0;i<n;i++)
			{
				printf("%c",b[i]);
			}
			printf("\n");
		}
		else if(p==2)
		{
			
			if(a[0]>=97 && a[0]<=122)
			{
				a[0]=a[0]-32;
			}
			printf("%c. ",a[0]);
			if(b[0]>=97 && b[0]<=122)
			{
				b[0]=b[0]-32;
			}
			printf("%c. ",b[0]);
			r=strlen(c);
			if(c[0]>=97 && c[0]<=122)
			{
				c[0]=c[0]-32;
			}
			for(i=1;i<m;i++)
			{
				if(c[i]>=65 && c[i]<=90)
				{
					c[i]=c[i]+32;
				}
			}
			for(i=0;i<m;i++)
			{
				printf("%c",c[i]);
			}
			printf("\n");
		}
		//printf("%d",p);
		t--;
	}
	return 0;
}
