#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int i = 0;
	int num = 0;
	int NoPrime = 0;
	
	printf("Please enter a number: ");
	scanf("%d", &num);
	if (num == 1)
	{
		printf("It is not a prime number");
	}
	else
	{
		for (i = 2; i < num; i++)
		{
			if (num % i == 0)
			{
				NoPrime = 1;
				break;
			}
		}

		if (NoPrime == 1)
		{
			printf("It is not a prime number");
		}
		else
		{
			printf("It is a prime number");
		}
	}
}