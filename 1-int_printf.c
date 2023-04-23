#include "main.h"
/**
  *print_digit - a function that prints a digit
  *@n: the digit
  *@count: the counter
  *Return: count
  */
int print_digit(int n, int count)
{
	count = print_char(n + '0', count);
	return (count);
}
/**
  *print_int - a function that prints a signed decimal int
  *@n: the number
  *@count: the counter
  *Return: count
  */
int print_int(int n, int count)
{
	int num, y, k;

	y = 1000000000;

	if (n == 0)
		count = print_char('0', count);
	else if (n > 0)
		n = -n;
	else
		count = print_char('-', count);
	for (num = 0; num < 10; num++, y /= 10)
	{
		if (n / y == 0)
			continue;
		else
		{
			k = (-(n / y) % 10);
			if (k < 0)
				k *= -1;
			count = print_digit(k, count);
		}
	}
	return (count);
}
