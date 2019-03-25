#include<stdio.h>
int main()
{
int n,m,i,j,rem;
scanf("%d %d",&n,&m);
for(i=n;i<m;i++)
{
int k=i,sum=0;
for(j=0;k!=0;j++)
     {
      rem=k%10;
      sum=sum+rem*rem*rem;
      k=k/10;
     }
     if(sum==i)
     printf("%d\n",sum);
}
return 0;
}
