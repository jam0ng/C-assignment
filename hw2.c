#include<stdio.h>
int main(void)
{
	double km, mile;
	printf("Please enter kilometers: ");
	scanf_s("%lf", &km);
	mile = km / 1.609;
	printf("%.1lf km is equal to %.1lf miles.", km, mile);
	return 0;
}