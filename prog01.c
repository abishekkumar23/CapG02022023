#include<stdio.h>
#include<stdlib.h>
#include "myHeader.h"

int main()
{
	int op1,op2,result=0;
	char op;

	printf("\nEnter two operand values: ");
	scanf("%d%d",&op1,&op2);

	op=disp();

	switch(op)
	{
		case '+':
				result=sum(op1,op2);
				printf("\nAddition of two numbers=%d",result);
				break;
		case '*':
				result=prod(op1,op2);
				printf("\nProduct of two numbers=%d",result);
				break;
		default:
				printf("You have Entered incorrect operator");
	}

	printf("\n\n");

	return(EXIT_SUCCESS);
}

