#include <stdio.h>

int main(void)
{
	int num;
	int i, cnt=0;
	printf("Please enter a number: ");
	scanf_s("%d", &num);

	if (num < 2)
	{
		printf("It is not a prime number.\n");
		return 0;
	}
	
	for (i = 2; i <= num/2; i++)
	{
		if (num % i == 0)
		{
			cnt++;
			break;
		}
			
	}

	if (cnt > 0)
		printf("It is not a prime number.\n");
	else
		printf("It is a prime number.\n");
	return 0;

}
