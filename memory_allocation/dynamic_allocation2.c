#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int n;
	char *ar;

	n = 8;
	ar = malloc(sizeof(char) * n);
	ar[0] = 'S';
	ar[1] = 'O';
	ar[2] = 'N';
	ar[3] = 'N';
	ar[4] = 'I';
	ar[5] = 'E';
	ar[6] = 'H';
	ar[7] = '\0';
	printf("%s\n", ar);
	return (0);
}
