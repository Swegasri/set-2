#include <stdio.h>
#include<math.h>
int main()
{
int t1,min1,hour2,min2,hour3,min3;
scanf("%d %d\n%d %d",&t1,&min1,&hour2,&min2);
hour3=abs(t1-hour2);
min3=abs(min1-min2);
printf("%d %d",hour3,min3);
return 0;
}
