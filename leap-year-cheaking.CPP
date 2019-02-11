#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
	clrscr();
	int a;
	printf("\nEnter the year:");
	scanf("%d",&a);
	if(a%400==0)
	{
		printf("\nthis is leap year",a);
	}
	else if(a%100==0)
	{
		printf("\nthis is not leap year",a);
	}
	else if(a%4==0)
	{
		printf ("\nthis is leap year",a);
	}
	else
	{
	printf ("this is not leap year",a);
	}
	getch();
	return 0;
}
