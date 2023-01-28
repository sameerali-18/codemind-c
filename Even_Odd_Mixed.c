#include<stdio.h>
int main()
{
    int n,a=0,b=0,rem;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        if(rem%2==0)
        a++;
        if(rem%2!=0)
        b++;
        n/=10;
    }
    if(a>0&&b>0)
    {
        printf("Mixed");
    }
    else if(a>0&&b==0){
        printf("Even");
    }
    else if(a==0&&b>0){
        printf("Odd");
    }
}