#include<stdio.h>
int main()
{
    int n,max=0,rem;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        if(max<rem)
        max=rem;
        n/=10;
    }
    printf("%d",max);
}