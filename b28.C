#include <stdio.h>
int main() 
{
    int a,i,s[10000];
    
scanf("%d",&a);

for(i=0;i<a;i++)
{
    scanf("%d",&s[i]);
}
for(i=0;i<a;i++)
{
    printf("%d %d \n",s[i],i);
}
    
return 0;

}
