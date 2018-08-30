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

@author Noel Toy
*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>


int Disarium(int num);


int main()
{
	int num;
	
	printf("\nEnter a number:");
	scanf("%d",&num);
	
	if(Disarium(num))
	{
		printf("\nThe number %d is a disarium number!!",num);
	}
	else
	{
		printf("\nThe number %d is not a disarium number!!",num);
	}
	
	return 0;
}

int Disarium(int num)
{
	char str[20];
	int l,temp,d,sum=0;
	
	itoa(num,str,10);
	l=strlen(str);
	
	temp=num;
	
	while(temp>0)
	{
		d=temp%10;
		sum=sum+pow(d,l);
		l--;
		temp=temp/10;
	}
	if(sum==num)
	{
		return 1;
	}
	
	return 0;
	
}
