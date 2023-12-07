#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(int number)
{
	char str[7];
	int length = strlen(str);
	int i;

	sprintf(str, "%d", number);
	for (i = 0; i < length / 2; i++)
	{
		if (str[i] != str[length - i - 1])
			return (0);
	}
	return (1);
}

int main()
{
	int largestPalindrome = 0;
	int product, i, j;

	for (i = 100; i <= 999; i++)
	{
		for (j = i; j <= 999; j++)
		{
			product = i * j;
			if (isPalindrome(product) && product > largestPalindrome)
				largestPalindrome = product;
		}
	}
	FILE *file = fopen("102-result", "w");
	fprintf(file, "%d", largestPalindrome);
	fclose(file);

	return (0);
}
