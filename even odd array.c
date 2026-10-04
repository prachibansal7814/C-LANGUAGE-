#include<stdio.h>
int main()
{
	int a[3][3];
	int i,j;
	printf("Enter the elements of 2d array");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]%2==0)
			{
				printf("\neven number: %d",a[i][j]);
	        }
	        else
	        printf("\nodd number: %d",a[i][j]);
		}
	}
	return 0;
}