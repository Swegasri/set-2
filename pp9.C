#include<stdio.h>
int main(void)
{
int num,k,flag=0;
scanf("%d",&num);
for(k=2;k<=num/2;k++)
{
if(num%k==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("\n prime");
}
else
{
printf("\n not a prime number");
}
return 0;
}
