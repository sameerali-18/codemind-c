#include<stdio.h>
#include<math.h>
int main()
{
float a;
scanf("%f",&a);
float x;
if(a<=199)
{
x=a*1.20;
}
else if(a>=200&&a<400)
{
x=a*1.50;
}
else if(a>=400&&a<600)
{
x=a*1.80;
}
else if(a>=600)
{
x=a*2.00;
}
if(x>400)
{
float n=x*0.15;
printf("%0.2f",x+n);}
else
{
printf("%0.2f",x+100);
}
}

