#include <stdio.h>
#include <string.h>
int main()
{
  char c[100];
  int j,i;
  printf("enter the string");
  scanf("%s",c);
  printf("enter the number");
  scanf("%d",&j);
  for(i=0;i<j;i++)
  {
    printf("%s",c);
  }
  return 0;
  }
