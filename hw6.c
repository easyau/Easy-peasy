#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	
	int i, odd_cnt=0, even_cnt=0;
	int num[5];
	int odd[5], even[5];
	printf("Please input five integers: ");
	scanf("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);

	for (i = 0; i < 5; i++)
	{
		if (num[i] % 2 == 0)
			even[even_cnt++] = num[i];
		else
			odd[odd_cnt++] = num[i];
	}
	printf("Odd numbers: ");
	for (i = 0; i < odd_cnt; i++)
		printf(" %d", odd[i]);
	printf("\n");

	printf("Even numbers: ");
	for (i = 0; i < even_cnt; i++)
		printf(" %d", even[i]);
	printf("\n");

	return 0;
}