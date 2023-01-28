#include<stdio.h>
int main()
{
    int n,rem,sum=0,pro=1;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum+=rem;
        pro*=rem;
        n/=10;
    }
    printf("%d",pro-sum);
}