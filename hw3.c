#include <stdio.h>

int main(void)
{
	int i, j;
	int n = 5;
	for (i = 1; i <= 5; i++)
	{
		for (j = 4; j >= i; j--)
			printf(" ");

		for (j = 1; j <= (2 * i - 1); j++)
			printf("*");
		printf("\n");
	}
	return 0;
}