#include<stdio.h>
float height(float h)
{
    float c;
    c=2.54*h;
    return c;
}
int main()
{
    float h;
    scanf("%f",&h);
    float x1=height(h);
    printf("%.2f",x1);
}