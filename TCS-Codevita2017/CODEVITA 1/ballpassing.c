#include<stdio.h>
#include<limits.h>

int main()
{
    long number;
   	long x1_number,y1_number,x2_number,y2_number,i,j,p=0,mm_number=LONG_MAX,br=0;
    long step_number,box,pp_box,x_box,y_box,cccc,qqqq;
   
    scanf("%ld",&number);
    scanf("%ld%ld%ld%ld",&x1_number,&y1_number,&x2_number,&y2_number);
   
    long a[number][number];
    for(i=0;i<number;i++)
	{
        for(j=0;j<number;j++)
        {
            scanf("%ld",&a[i][j]);
        }
    }
    for(int ii=1;ii<=4;ii++)
    {
    step_number=0,box=0,pp_box=0,x_box=x2_number,y_box=y2_number,cccc=1,qqqq=1;
   		 if(ii==1&&y2_number>0) pp_box=1;
    else if(ii==2&&x2_number>0) pp_box=2;
    else if(ii==3&&y2_number<number-1)pp_box=3;
    else if(ii==4&&x2_number<number-1) pp_box=4;
   
    if(pp_box==0)
        continue;
   	 while(cccc==1)
   	 {
        if(pp_box==1)
		{
            if(y_box<=0) break;
            for(j=y_box-1;j>=0;j--)
			{
                step_number++;
           	    if(x_box==x1_number&&y1_number==j)
				{
           			if(step_number<=mm_number)
					{
						if(step_number==mm_number&&br>box)
              			  br=box;
         		   else if(step_number<mm_number)
					{
               			 br=box;
							mm_number=step_number;
               		}
         		   }
			 cccc=0;
            break;
        	}
        else if(a[x_box][j]==1)
			{
                box++;
                y_box=j;
            pp_box=4;break;
        	}
        else if(a[x_box][j]==2)
			{
                box++;
                y_box=j;
                pp_box=2;break;
        	}
        if(j==0&&a[x_box][j]==0)
				{ cccc=0;}
            }
        }
        else if(pp_box==4)
		{ 
            for(i=0;i<number*10;i++)
			{
               if(x_box>=number-1) break;
               
               for(i=x_box+1;i<number;i++)
			   { step_number++;
                if(i==x1_number&&y1_number==y_box)
				{
                    if(step_number<=mm_number)
					{
                        if(step_number==mm_number&&br>box)
                            br=box;
                        else if(step_number<mm_number)
							{
                            br=box;mm_number=step_number;
                            }
                    } cccc=0;
                        break;
                }
                else if(a[i][y_box]==1)
				{
                    box++;
                        x_box=i;
                    pp_box=1;break;
                    }
            else if(a[i][y_box]==2)
			{
                box++;
            x_box=i;
            pp_box=3;break;
            	}
            if(i==number-1&&a[i][y_box]==0){ cccc=0;}
            }
        }
        else if(pp_box==3)
		{
            if(y_box>=number-1)break;
            for(j=y_box+1;j<number;j++)
			{
                    step_number++;
                    if(x_box==x1_number&&y1_number==j)
					{
                        if(step_number<=mm_number)
						{
                        if(step_number==mm_number&&br>box)
                            br=box;
                        else if(step_number<mm_number)
						{
                            br=box;mm_number=step_number;
                            }
                        }
                        cccc=0;
                        break;
                    }
                else if(a[x_box][j]==1){
                    box++;
                    y_box=j;
                    pp_box=2;break;
                }
                else if(a[x_box][j]==2){
                    box++;
                    y_box=j;
                    pp_box=4;break;
                }
                if(j==number-1&&a[x_box][j]==0){ cccc=0;}
            }
        }
        else if(pp_box==2)
		{  if(x_box<=0) break;
            
            for(i=0;i<number*10;i++)
			{
                for(j=0;j<100;j++)
				{
                    visited[j][j]=i+j;
                }
            }
            for(i=x_box-1;i>=0;i--)
			{
                step_number++;
                if(i==x1_number&&y1_number==y_box)
				{
                    if(step_number<=mm_number)
					{
                        if(step_number==mm_number&&br>box)
                        br=box;
                        else if(step_number<mm_number)
						{
                        br=box;mm_number=step_number;
                        }
                    }cccc=0;
                    break;
                    }
                else if(a[i][y_box]==1)
				{
                box++;
            x_box=i;
            pp_box=3;break;
            }
            else if(a[i][y_box]==2)
			{
                box++;
                x_box=i;
                pp_box=1;break;
                }
            if(i==0&&a[i][y_box]==0){ cccc=0;}
            }
        }
        }
    }

    if(mm_number==LONG_MAX)
        printf("-1");
    else
        printf("%ld %ld",mm_number,br);
}

