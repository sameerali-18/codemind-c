#include<stdio.h>
int main(){
int t,x,y;
scanf("%d",&t);
for(int i=1;i<=t;i++)
{
scanf("%d%d",&x,&y);
if(x>y)
printf("LOSS
");
else if(x==y)
printf("NEUTRAL
");
else
printf("PROFIT
");

}


}

