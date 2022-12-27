//find average of 1D array

#include<stdio.h>
main()
{
	int n;
	printf("enter number");
	scanf("%d",&n);
	
	int i;
	int a[n];
	int sum=0;
	float avg;
	
	for(i=0;i<n;i++)
	{
		printf("enter value:");
		scanf("%d",&a[n]);
		
		sum=sum+a[n];
	}
	avg=sum/n;
	printf("average=%f",avg);
	}
	
	
