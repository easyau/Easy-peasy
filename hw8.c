#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double standard(int* ptr)
{
	int i, sum = 0;
	double result, total = 0.0, mu;
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
	result = sqrt(total / 5.0);
	return result;

}

int main(void)
{
	int arr[5];
	double result;
	printf("Enter 5 real numbers: ");
	scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
	result = standard(arr);
	printf("Standard Deviation: %.3f\n", result);
	return 0;

}

