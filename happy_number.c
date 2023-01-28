#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
        while(sum!=1&&sum!=7&&sum!=4){
        sum=0;
        while(n>0){
            sum+=((n%10)*(n%10));
            n/=10;
        }
        n=sum;
    }
    if(sum==1 || sum==7)
    {
        printf("True");
    }
    else {
        printf("False");
    }
}