#include <stdio.h>

int main()
{
    char s[1000];
    int i;
    printf("enter a string:");
    scanf("%s",s);
    for(i=0;s[i]!='\0';++i);
    printf("length of string:%d",i);
    return 0;
}
