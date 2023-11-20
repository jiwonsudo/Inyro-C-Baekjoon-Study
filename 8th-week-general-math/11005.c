#include <stdio.h>

void convertDigit(int num, int base)
{
	if (num != 0)
	{
		convertDigit(num / base, base);
		if (num % base > 9 && base > 10)
			printf("%c", 'A' + num % base - 10);
		else
			printf("%d", num % base);
	}
}

int main()
{
	int numToCnvt;
	int baseToCnvt;

	scanf("%d %d", &numToCnvt, &baseToCnvt);

	convertDigit(numToCnvt, baseToCnvt);

	return 0;
}