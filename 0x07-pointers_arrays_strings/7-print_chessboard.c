#include "main.h"

void print_chessboard(char (*a)[8])
{
	int i;
	int j;
	
	for (i = 0; i < 8; i++)
	{
		for(j = 0; j < 8; j++)
		{
			if(a[i][j] >= 'a' || a[i][j] <= 'z')
			{
				_putchar(a[i][j]);
				if(j == 7)
				{
					_putchar('\n');
				}
			}
			else 
			{
				_putchar(a[i][j]);
			}
		}
	}
}
