#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int trans_binary(num)
{
	int num_1 = 0;

	if (num == 0)
	{
		return 1;
	}
	else
	{
		num_1 = num / 2;
		return trans_binary(num_1) + printf("%d", num % 2);
	}
}

int main(void)
{
	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);
	trans_binary(num);
}