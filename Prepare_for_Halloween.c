#include<stdio.h>
int main()
{
    int n,i,ch,ca;
    int x,y;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d",&x,&y);
        ch=2*x;
        ca=5*y;
        if(ch>ca)
        {
            printf("Chocolate
");
        }
        else if(ch==ca)
        {
            printf("Either
");
        }
        else
        {
            printf("Candy
");
        }
    }
}