#include<stdio.h>
int main()
{
int n,m,sum=0,q,i;
scanf("%d",&n);
q=n;
for(i=0;n>0;i++)
{
m=n%10;
sum=sum+m*m*m;
n=n/10;
}
if(sum==q)
printf("armstrong number");
else
printf("not armstrong number");
return 0;
}
