#include<stdio.h>
main()
{
	int a[100],n,i;
	int *p;
	p=&a;
	
	printf("enter value of n=");
	scanf("%d",&n);
	
	
	for(i=0;i<n;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("\n elements of array=\n");
	for(i=0;i<n;i++)
	{
		printf("%d",*(p+i));
	}
	printf("\nReverse array elements are=\n");
	
	int *rev;
	rev=&a[n-1];
	for(i=0;i<n;i++)
	{
		printf("%d\n",*rev--);
	}
}
