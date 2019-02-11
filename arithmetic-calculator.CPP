#include <stdio.h>
#include <conio.h>
int main()
{
	clrscr();
	int a,b;
	int sum,difference,product;
	float quotient;
	long square ;
	printf("Enter the first nuber:");
	scanf("%d",&a);
	printf ("\nEnter  the second number:");
	scanf("%d",&b);
	sum=a+b;
	difference=a-b;
	product=a*b;
	quotient=float(a)/b;
	square=a*a;
	printf("\nSum=%d",sum);
	printf("\ndifference=%d",difference);
	printf("\nProduct=%d",product);
	printf("\nquotient=%f",quotient);
	printf("\nSquare=%d",square);
	getch();
	return 0;
}