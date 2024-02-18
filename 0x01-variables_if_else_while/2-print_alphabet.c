#include <stdio.h>

/*
 * this is the main function the enrty point in excuting the program
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
{
	putchar(a);
	a++;
}
	putchar('\n');
	return (0);
}
