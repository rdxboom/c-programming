/*array practice*/ 

#include <stdio.h>


int main()
{
	int array[5],i;
	
	printf("enter the elements: \n");	
	
	
	for(i=0;i<5;i++)
	{
	scanf("%d",&array[i]);
	}
	
	for(i=0;i<5;i++)
	{
	printf("%d\n",array[i]);
	}
	
	for(i=0;i<5;i++){
		if ( array[i]<0 )
		{printf("%d\t",array[i]);
		}
	}
}
