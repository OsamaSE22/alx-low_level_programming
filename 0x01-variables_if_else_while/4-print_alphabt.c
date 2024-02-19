#include <stdio.h>

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
		if (a == 'e' || a == 'q')
			a++;
	}
	putchar('\n');
	return (0);
}
