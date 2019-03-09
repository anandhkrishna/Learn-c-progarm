#include <stdio.h>
#include <conio.h>
int main()
{
	int n,a[100],i;
	void sortarray(int*,int);
	
	printf("\n Enter the number of element in an array:");
	scanf("%d",&n);
	printf("\n Enter the array element\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sortarray(a,n);
	printf("\n After sorting...\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
	return 0;
}
void sortarray(int* arr,int num)
{
	int i,j,temp;
	for (i=0;i<num;i++)
	{
		for(j=0;j<num;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}

