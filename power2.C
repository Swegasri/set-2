
#include <stdio.h>

int main()
{
    int num;
    int tempnum,flag;
    printf("enter an integer number:");
    scanf("%d",&num);
    tempnum=num;
    flag=0;
    while(tempnum!=1)
    {
        if(tempnum%2!=0)
        {
            flag=1;
            break;
        }
        tempnum=tempnum/2;
    }
    if(flag==0)
        printf("%d is a number that is the power of 2.",num);
    else
        printf("%d is not the power of 2.",num);
    return 0;
}
