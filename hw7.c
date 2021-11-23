#include<math.h>
#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

double Standard_Deviation(double * ptr, int len)
{
	int i;
	double sum = 0;
	double u = 0;
	for (i = 0; i < len; i++)
	{
		sum = sum + ptr[i];
	}

	u = sum / ptr[4];
	sum = 0;

	for (i = 0; i < len; i++)
	{
		sum = sum + pow(ptr[i] - u, 2);
	}

	return sqrt(sum / ptr[4]);
}



double main(void)
{
	double num[5];
	double result;

	printf("Enter 5 real numbers: ");
	scanf_s("%lf %lf %lf %lf %lf", &num[0], &num[1], &num[2], &num[3], &num[4]);
	result = Standard_Deviation(num, sizeof(num) / sizeof(double));
	printf("Standard Deviation = %.3lf", result);

	return 0;
}

