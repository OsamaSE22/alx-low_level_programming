#include <stdio.h>

/*
 * this is the main function - the entry point
 */
int main(void)
{
	char a = 'a';
	char A = 'A';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (A <= 'Z')
	{
		putchar(A);
		A++;
	}
	putchar('\n');
	return (0);
}
