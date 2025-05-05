#include <stdio.h>
#include "main.h"

/**
 * print_binary - convert the decimal to binary.
 * @n: the number to be converted.
 *
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	int middle, i;
	int length = 0;
	char binary[256];
	char temp;

	do
	{
		if(n % 2 == 0) 
		{
			binary[length] = '0';
		}
		else
		{
			binary[length] = '1';
		}
		n /=2;
		length++;
	} while (n != 0);
	binary[length] = '\0';
	
	middle = length / 2;
	for (i = 0; i < middle; i++)
	{
		temp = binary[i];
		binary[i] = binary[length - i - 1];
		binary[length - i - 1] = temp;
	}
	printf("%s", binary);
}
