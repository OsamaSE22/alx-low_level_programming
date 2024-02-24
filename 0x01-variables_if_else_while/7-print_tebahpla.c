#include <stdio.h>

/*
 * this is the main function the enrty point
 * in this program in want to putput
 * characters in lower-case using putchar function
 * let's do it!
 */
int main(void)
{
	char z = 'z';

	while (z >= 'a')
	{
		putchar (z);
		z--;
	}
	putchar ('\n');
	return (0);
}
