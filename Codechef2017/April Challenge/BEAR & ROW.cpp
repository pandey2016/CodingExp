#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int amit()
{
	int T;
	scanf("%d",&T);
	while(T>0)
	{
		char a[4][100],b[4][100];
		int i,j,c,count=0;
		for(i=0;i<4;i++)
		{
			scanf("%s",&a[i][0]);
		}
		for(i=0;i<4;i++)
		{
			scanf("%s",&b[i][0]);
		}
		for(i=0;i<4;i++)
		{
			for(j=0;j<4;j++)
			{
				c=strcmp(&a[i][0],&b[j][0]);
				if(c==0)
				count++;
				
			}
		}
		
		if(count>=2){
			printf("similar\n");
		}
		else{
		
		printf("disimilar\n");
	}
		
	T--;
	}
	return 0;
}
int main()
{
	long T;
	//scanf("%d\n",&T);
	cin>>T;
	while(T>0){
	
	//char arr[1000005];
	string arr;
	cin>>arr;
	long long n,i,index,x=0,y=0,sum=0,ss=0;
	//n=strlen(arr);
	n=arr.length();
	index=n;
	while(arr[index-1]==1)
		index--;
	ss=0;
	for(i=index-1;i>=0;i--)
	{
		ss++;
		if(arr[i]=='0')
		 continue;
	
		x=x+1;
		if(arr[i+1]=='0')
		{
			y=y+1;
		}
		sum=sum+(ss-x)+y;
	
	}
	cout<<sum<<endl;
	T--;
}
return 0;
}
