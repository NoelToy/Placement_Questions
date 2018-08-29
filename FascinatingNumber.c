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
#include<stdlib.h>
#include<string.h>


int Fascinating(int num);



int main()
{
	int num;
	int num2,num3,temp;
	
	char str[20];
	char str1[20];
	char str2[20];
	
	printf("\nEnter the number:");
	scanf("%d",&num);
	
	temp=num;	
	
	num2=num*2;
	num3=num*3;
	
	itoa(num, str, 10);
	itoa(num2,str1,10);
	itoa(num3,str2,10);
	
	strcat(str,str1);
	strcat(str,str2);
	
	num=atoi (str);
	
	printf("\nValue:%d",num);
	if(Fascinating(num))
	{
		printf("\nThe number %d is a Fasinating Number",temp);
	}
	else
	{
		printf("\nThe number %d is not a Fasinating Number",temp);
	}
	return 0;
}

int Fascinating(int num)
{
	char t[20];
	int count[9]={0};
	int d=num;
	int len;
	int temp;
	
	itoa(d,t,10);
	len=strlen(t);
	
	if(len!=9)
	{
		return 0;
	}
	
	while(d>0)
	{
		temp=d%10;
		
		switch(temp)
		{
			case 1:
					count[1]=count[1]+1;
					if(count[1]>1)
					{
						return 0;
					}
			break;
			case 2:
					count[2]=count[2]+1;
					if(count[2]>1)
					{
						return 0;
					}
			break;
			case 3:
					count[3]=count[3]+1;
					if(count[3]>1)
					{
						return 0;
					}
			break;
			case 4:
					count[4]=count[4]+1;
					if(count[4]>1)
					{
						return 0;
					}
			break;
			case 5:
					count[5]=count[5]+1;
					if(count[5]>1)
					{
						return 0;
					}
			break;
			case 6:
					count[6]=count[6]+1;
					if(count[6]>1)
					{
						return 0;
					}
			break;
			case 7:
					count[7]=count[7]+1;
					if(count[7]>1)
					{
						return 0;
					}
			break;
			case 8:
					count[8]=count[8]+1;
					if(count[8]>1)
					{
						return 0;
					}
			break;
			case 9:
					count[9]=count[9]+1;
					if(count[9]>1)
					{
						return 0;
					}
			break;
		}
		d=d/10;
	}
	return 1;
	
}


