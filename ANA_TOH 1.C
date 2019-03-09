#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int toh(int n,char from,char to,char aux)
{
	if(n==1)
	{
		printf("\n Move to disk 1 from peg %c to peg %c,from",from,to);
		return;
	}
	toh(n-1,from,aux,to);
	printf("\n move disk %d from peg %c to peg %c",n,from,to);
	toh(n-1,aux,to,from);
	return 0;
}
int main()
{
	int n;
	printf("enter the number of disks:");
	scanf("%d",&n);
	toh(n,'A','C','B');	   
	return 0;
}

