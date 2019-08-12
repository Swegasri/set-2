#include <stdio.h>
#include<math.h>
int main()
{
    int number,i,k[10000],min;
    scanf("%d",&number);
    
    for(i=0;i<number;i++)
    {
        scanf("%d",&k[i]);
         }
    min=k[0];
    for(i=0;i<number;i++)
    {
        if(k[i]<min)
        {
            min=k[i];
        }
    }
     printf("%d",min);
    return 0;
}
