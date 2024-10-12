#include <stdio.h>

int Binary(int num)
{
	if (num < 2)
		printf("%d", num);
	else
	{
		Binary(num / 2);
		printf("%d", num % 2);
	}
}


int main(void)
{
	int num;
	printf("Please enter a number: ");
	scanf_s("%d", &num);
	Binary(num);
	return 0;
}