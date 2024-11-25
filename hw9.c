#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int convCase(int ch)
{
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z')
		return ch + diff;
	else if (ch >= 'a' && ch <= 'z')
		return ch - diff;
	else
		return ch;
}

int main(void)
{
	char str[50];
	int i;
	printf("Input> ");
	fgets(str, sizeof(str), stdin);
	for (i = 0; str[i] != '\0'; i++)
		str[i] = convCase(str[i]);
	printf("Output> ");
	puts(str);
	return 0;
}