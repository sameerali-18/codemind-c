#include<stdio.h>
int main()
{
   int n,s1,s2,rev=0,r;
   scanf("%d",&n);
   s1=n*n;
   	while(n!=0)
   	{
   		r=n%10;
   		rev=rev*10+r;
   		n=n/10;
	}
	   int re,rev1=0;
	   s2=rev*rev;
	   while(s2!=0)
	   {
	   	re=s2%10;
	   	rev1=rev1*10+re;
	   	s2=s2/10;
	   }
	   if(rev1==s1)
	   {
	   	printf("True");
	   }
	   else
	   {
	   	printf("False");
	   }
}