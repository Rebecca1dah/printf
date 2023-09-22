#include "main.h"
/**
 * get_integer - print the digits of that number in reverse order
 * @number: integer
 */

void get_integer(int number)
{
	int nb;

	if (number == 0)
		return;

	nb = number / 10;

	get_integer(nb);
	putchr(number % 10 + '0');

	return;
}
