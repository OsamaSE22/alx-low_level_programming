#include "main.h"

/**
 * islower function is in c return 1
 * if the input is lowercase chae and 0 otherwise
 *
 * the function return 1
 * if the char is lowercase and return 0 if it's uppercae
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
