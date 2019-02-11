#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
	clrscr();
	int num,temp,sum=0,rem=0,cube=0;
	printf("enter the first number:");
	scanf("%d",&num);
	temp=num;
	while (num!=0)
	{
		rem=num%10;
		cube=pow(rem,3);
		sum=sum+cube;
		num=num/10;
	}
	if(sum==temp)
	{
		printf("the given number is armstrong number");
	}
	else
	{
		printf("the given number is not an armstrong number");
	}
	getch();
	return 0;
}


