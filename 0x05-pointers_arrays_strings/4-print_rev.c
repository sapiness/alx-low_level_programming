#include "main.h"

/**
 * print_rev - function that prints a string, in reverse.
<<<<<<< HEAD
 * @s: the used string reference pointer
=======
 * $s: the used string reference pointer
>>>>>>> f5335529fdc4b174ef061c16c16200eb925656d4
 * Return: 0
 */

void print_rev(char *s)
{
	int start = 0;
<<<<<<< HEAD

=======
	
>>>>>>> f5335529fdc4b174ef061c16c16200eb925656d4
	while (s[start])
		start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}
