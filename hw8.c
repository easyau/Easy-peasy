#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double standard(double* ptr)
{
	int i;
	double total = 0.0, sum = 0.0 ,mu;
	for (i = 0; i < 5; i++)
	{
		sum += ptr[i];
	}
	mu = sum / 5.0;

	for (i = 0; i < 5; i++)
	{
		double a = ptr[i] - mu;
		total += pow(a, 2);
	}
	return sqrt(total/5.0);

}

int main(void)
{
	double arr[5];
	double result;
	printf("Enter 5 real numbers: ");
	scanf("%lf %lf %lf %lf %lf", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	result = standard(arr);
	printf("Standard Deviation: %.3f\n", result);
	return 0;

}

