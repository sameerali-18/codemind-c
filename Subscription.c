#include<stdio.h>
int main()
{
    int n,i,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&c);
        if(c>30)
        {
            printf("YES
");
        }
        else
        {
            printf("NO
");
        }
    }
}