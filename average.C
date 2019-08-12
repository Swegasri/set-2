
#include <stdio.h>
int main()
{
   int n,count=1;
   float x,average,sum=0;
   printf("how many numbers");
   scanf("%d",&n);
   while(count<n)
   {
       printf("x=");
       scanf("%f",&x);
       sum+=x;
       ++count;
   }
   average=sum/n;
   printf("\n the average is %f\n",average);
}
