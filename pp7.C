#include <stdio.h>
int main(void) 
{
int i;
printf("\nthe even numbers are:");
for(i=10;i<=15;i++)
{
if(i%2==0)
{
printf("%d",i);
printf("\n");
}
}
return 0;
}
