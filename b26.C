#include <stdio.h>
#include<math.h>

int main()
{
int a[100000],h,i,j,s;
 scanf("%d",&h);
 for(i=0;i<h;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=0;i<h;i++)
 {
 for(j=i;j<h;j++)
  {
   if(a[i]>a[j] && i!=j)
   {
    s=a[i];
    a[i]=a[j];
    a[j]=s;
      }
  }
 }
 for(i=0;i<h;i++)
 {
  printf("%d ",a[i]);
 }

 return 0;
}
