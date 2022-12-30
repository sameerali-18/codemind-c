#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,no,n2;
    int ld,rev=0,r;
    scanf("%lld",&n);
    ld=n%1000;
    while(ld!=0)
    {
        r=ld%10;
        rev=rev*10+r;
        ld=ld/10;
    }
    no=n/1000;
    no=no*1000;
    n2=no+rev;
    {
    printf("%lld",n2);
    }
}


