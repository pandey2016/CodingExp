#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--!=0)
    {long int n,k;
     string s;
      cin>>n>>k;
      cin>>s;
      long long int i,cntb=0,comb=0,cnta=0;
      for(i=n-1;i>=0;i--)
      {if(s[i]=='b')
       cntb++;
       if(s[i]=='a')
       {cnta++;
       comb=comb+cntb;
       }
      }
      long long int final=0,m;
      m=k-1;
      final=(m*(m+1))/2;
      long long unsigned int  h,d;
      h=final*cntb*cnta;
      d=comb*k;
      cout<<d+h<<"\n";
      
    }
	return 0;
} 
