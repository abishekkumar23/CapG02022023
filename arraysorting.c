#include<stdio.h>
int arraySort(int[], int);

int main()
{
	int arr[100],size;
	int i;
	printf("Enter the number of elements in array");
	scanf("%d\n",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	arraySort(arr,size);
	return 0;
}

int arraySort(int arr[],int size)
{
	int i,temp=0,j;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
       		 	if(arr[i]<arr[j])
			{ temp=arr[i];
			  arr[i]=arr[j];
			  arr[j]=temp;
			}
		}
	}
	printf("\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
