/*

$$$$$$$\                      $$\   $$\                     $$\       $$$$$$$$\                  
$$  __$$\                     $$$\  $$ |                    $$ |      \__$$  __|                 
$$ |  $$ |$$\   $$\           $$$$\ $$ | $$$$$$\   $$$$$$\  $$ |         $$ | $$$$$$\  $$\   $$\ 
$$$$$$$\ |$$ |  $$ |          $$ $$\$$ |$$  __$$\ $$  __$$\ $$ |         $$ |$$  __$$\ $$ |  $$ |
$$  __$$\ $$ |  $$ |          $$ \$$$$ |$$ /  $$ |$$$$$$$$ |$$ |         $$ |$$ /  $$ |$$ |  $$ |
$$ |  $$ |$$ |  $$ |          $$ |\$$$ |$$ |  $$ |$$   ____|$$ |         $$ |$$ |  $$ |$$ |  $$ |
$$$$$$$  |\$$$$$$$ |$$\       $$ | \$$ |\$$$$$$  |\$$$$$$$\ $$ |         $$ |\$$$$$$  |\$$$$$$$ |
\_______/  \____$$ |$  |      \__|  \__| \______/  \_______|\__|         \__| \______/  \____$$ |
          $$\   $$ |\_/                                                                $$\   $$ |
          \$$$$$$  |                                                                   \$$$$$$  |
           \______/                                                                     \______/ 

*/
#include<stdio.h>
#include<stdlib.h>

void main()
{
	int a[20],limit,i,shift,j=0;
	
	printf("\nEnter the number of elements:");
	scanf("%d",&limit);
	
	printf("\nEnter the array elements:");
	
	for(i=0;i<limit;i++)
	{
		printf("\nEnter the value of a[%d]:",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nThe array elements are:");
	for(i=0;i<limit;i++)
	{
		printf("\nThe value of a[%d]:%d",i,a[i]);
	}
	
	printf("\nEnter the shift factor:");
	scanf("%d",&shift);
	
	for(i=limit;i<limit+shift;i++) //copying (0 to shift-1) elemets to (limit to limit+shift)
	{
		a[i]=a[j];
		j++;
	}
	
	for(i=shift;i<limit+shift;i++) //shifting the array forward
	{
		a[i-shift]=a[i];
	}
	printf("\nThe array elements after shift are:");
	for(i=0;i<limit;i++)
	{
		printf("\nThe value of a[%d]:%d",i,a[i]);
	}
}
