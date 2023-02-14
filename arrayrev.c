#include<stdio.h>
int main()
{
	int arr[5]={9,5,1,2,4};
	int i;
	printf("The reversed array is : ");
	for(i=4;i>=0;i--)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
