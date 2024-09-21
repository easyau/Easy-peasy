#include <stdio.h>

int main(void)
{
	double knum;
	double mnum;
	printf("please enter kilometers: ");
	scanf_s("%lf", &knum);
	mnum = (1 / 1.609) * knum;
	printf("%.1f km is equal to %.1f miles.",knum,mnum);
	return 0;
}