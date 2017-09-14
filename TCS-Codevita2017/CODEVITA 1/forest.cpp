#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cin >> m >>n;
	int x,y;
	cin >> x >>y;
	int i,A[m][n],j;
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			char sp;
			cin >> sp ;
			if(sp=='W')
			{
				A[i][j]=0;
			}
			else
			{
				A[i][j]=-1;
			}
			
		}
	}
	int c=1,maxc=1,prevc=1;
	A[x-1][y-1]=1;
	 while(1){
            bool flag=false;
        for(i=0;i<m;i++)
		{
        	
            for(j=0;j<n;j++)
			{


                if(A[i][j]==c)
				{
                	 if(i-1>=0 && j+1<n && A[i-1][j+1]==-1)
					 {
                        A[i-1][j+1]=c+1;
                        flag=true;
                     }                        
                    if(j+1<n && A[i][j+1]==-1)
					{
                        A[i][j+1]=c+1;
                        flag=true;
                    }
                    if(i+1<m && j-1>=0 && A[i+1][j-1]==-1)
					{
                        A[i+1][j-1]=c+1;
                        flag=true;
                    }
                    if(j-1>=0 && A[i][j-1]==-1)
					{
                        A[i][j-1]=c+1;
                        flag=true;
                    }
                    if(i-1>=0 && j-1>=0 && A[i-1][j-1]==-1)
					{
                        A[i-1][j-1]=c+1;
                        flag=true;
                    }
                    if(i-1>=0 && A[i-1][j]==-1)
					{
                        A[i-1][j]=c+1;
                        flag=true;
                    }
                    if(i+1<m && A[i+1][j]==-1)
					{
                        A[i+1][j]=c+1;
                        flag=true;
                    }
                    if(i+1<m && j+1<n &&A[i+1][j+1]==-1)
					{
                        A[i+1][j+1]=c+1;
                    flag=true;
                    }

                }

            }

        }
       
        if(flag)
		{
          c++;
        }
        else
        {
        	prevc=c;
        }
                
        if(maxc<c)
		{
		    maxc=c;	
        }
        if(c==prevc)
		{
               
          break;
        }

    }
    cout << maxc << endl;
	return 0;
}
