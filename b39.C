#include <stdio.h>

int main(void) 
{
	int array[20];
	int b,i,max=array[0];
	printf("enter the number of elements:");
	scanf("%d",&b);
	printf("\n enter the array elements:");
	for(i=0;i<b;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<b;i++)
	{
		if(array[i]>max)
		{
			max=array[i];
		}
	}
	printf("\nthe maximum of the numbers is:%d",max);
	return 0;
}
