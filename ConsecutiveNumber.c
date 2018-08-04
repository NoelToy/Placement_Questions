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

int nextNumber(int); //Finds next Consecutive Number

void main()
{
	int n,nn;
	printf("\nEnter the number:");
	scanf("%d",&n);
	nn=nextNumber(n);
	printf("\nThe next number is:%d",nn);
	getch();
}

int nextNumber(int n)
{
	int k=n+1;
	int i,flag=1;
	while(flag==1)
	{
		if( (k&(k>>1))==0)// if there is no consecutive ones in k then this operation will result in zero
		{
			break;
		}
		k+=1;
	}
	return k;//returning the next consecutive number
	
}
