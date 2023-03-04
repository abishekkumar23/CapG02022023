#include<stdio.h>
#include<stdlib.h>

void prime(int);

int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	prime(n);

	return 0;
}

void prime(int n)
{
	int i,flag=0;
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
			flag=1;
	}
	if(flag==0)
		printf("Prime");
	else
		printf("Not Prime");
}
