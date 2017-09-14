#include<bits/stdc++.h>
using namespace std;
int madeeasy(char *a);
int main()
{

char *str="gatecs";
printf("%d",madeeasy(str));
	
	
	return 0;
}
int madeeasy(char *p1)
{
	char *p2=p1;
	while(*++p1);
	return(p1-p2);
}
