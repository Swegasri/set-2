#include <stdio.h>
int main()
{
  int p,q,r=0;
  scanf("%d",&p);
  q=p;
  while(q!=0)
  {
    r*=10;
    r+=(q%10);
    q/=10;
  }
  if(q==r)
  {
    printf("yes");
  }
  else{printf("no");}
}
