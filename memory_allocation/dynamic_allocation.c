#include <stdio.h>
#include <stdlib.h">

/**
 * main - this is the main function
 * @n: memory size to be allocated
 * @ar: A pointer to return to
 * Return: 0 (success)
 */

int main()
{
	int n;
	char *ar;

	n = 5;
	ar = malloc(n * sizeof(char));
	ar[0] = 'B';
	ar[0] = 'E';
	ar[0] = 'S';
	ar[0] = 'T';
	ar[0] = '\0';
	printf("%s\n", ar);
	return (0);
}
