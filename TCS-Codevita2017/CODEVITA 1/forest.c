
Q.2 FOREST


#include<stdio.h>
#include <stdbool.h> // to d
int main()
{
	int M,N;
	scanf("%d%d",&M,&N);
	int X,Y;
	scanf("%d%d",&X,&Y);
	int i,F[M][N],j,b=1,w=1,y=1;
	char C[M][N];
	for(i=0;i<M;i++)
	{
		for(j=0;j<N;j++)
		{
			scanf("%s",&C[i][j]);
			if(C[i][j]=='W')
			{
				F[i][j]=0;
			}
			else
			{
				F[i][j]=-1;
			}

		}
	}

	F[X-1][Y-1]=1;
	 while(1){
            bool a=false;
        for(i=0;i<M;i++)
		{

            for(j=0;j<N;j++)
			{


                if(F[i][j]==b)
				{
                	 if(i-1>=0 && j+1<N && F[i-1][j+1]==-1)/*  /upward   */
					 {
                        F[i-1][j+1]=b+1;
                        a=true;
                     }
                    if(j+1<N && F[i][j+1]==-1) // ->
					{
                        F[i][j+1]=b+1;
                        a=true;
                    }
                    if(i+1<M && j-1>=0 && F[i+1][j-1]==-1) // /downward
					{
                        F[i+1][j-1]=b+1;
                        a=true;
                    }
                    if(j-1>=0 && F[i][j-1]==-1)  //  <-
					{
                        F[i][j-1]=b+1;
                        a=true;
                    }
                    if(i-1>=0 && j-1>=0 && F[i-1][j-1]==-1)  // \upward
					{
                        F[i-1][j-1]=b+1;
                        a=true;
                    }
                    if(i-1>=0 && F[i-1][j]==-1)  //  |upward
					{
                        F[i-1][j]=b+1;
                        a=true;
                    }
                    if(i+1<M && F[i+1][j]==-1)  // | downward
					{
                        F[i+1][j]=b+1;
                        a=true;
                    }
                    if(i+1<M && j+1<N &&F[i+1][j+1]==-1)  //  \downward
					{
                        F[i+1][j+1]=b+1;
                    a=true;
                    }

                }

            }

        }

        if(a)
		{
          b++;
        }
        else
        {
        	y=b;
        }

        if(w<b)
		{
		    w=b;
        }
        if(b==y)
		{

          break;
        }

    }
    printf("%d",w);
	return 0;
}
