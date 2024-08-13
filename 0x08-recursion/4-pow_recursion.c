#include "main.h"

int _pow_recursion(int x, int y)
{
	if(y < 0)
	{
		return -1;
	}
	else if(y == 0)
	{
		return 1;
	}
	else
	{
		y--;
		return x * _pow_recursion(x, y);
	}
}
