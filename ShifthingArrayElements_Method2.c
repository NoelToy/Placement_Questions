#include<stdio.h>
#include<stdlib.h>

void main()
{
	int a[20],limit,i,j,shift,temp;
	
	printf("\nEnter the number of elements:");
	scanf("%d",&limit);
	
	printf("\nEnter the elements into the array:");
	
	for(i=0;i<limit;i++)
	{
		printf("\nEnter value for a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter the shift factor:");
	scanf("%d",&shift);
	
	for(i=0;i<shift;i++)
	{
		temp=a[0];
		for(j=0;j<limit;j++)
		{
			a[j]=a[j+1];		
		}
		a[j-1]=temp;
	}
	
	printf("\nThe array after the shifting is:");
	for(i=0;i<limit;i++)
	{
		printf("\nThe value of a[%d]:%d",i,a[i]);
	}
}
