#include<stdio.h>
int main()
{
    double P,Q;
    scanf("%lf",&P);
    if(P<=199)
    {
        Q=P*1.2;
    }
    else if(P>=200 && P<400)
    {
        Q=P*1.5;
    }
    else if(P>=400 && P<600)
    {
        Q=P*1.8;
    }
    else
    {
        Q=P*2;
    }
    if(Q>400)
    {
        Q=Q*115;
        Q=Q/100;
    }
    else
    {
        Q=Q+100;
    }
    printf("%0.2lf",Q);
    return 0;
}