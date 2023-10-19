#include "main.h"

/**
 * leet - encodes a string into 1337
 * letters a and A are replaced by 4
 * letters e and E are replaced by 3
 * letters o and O are replaced by 0
 * letters t and T are replaced by 7
 * letters l and L are replaced by 1
 * @s: pointer to string
 *
 * Return: pointer to s
 */

char *leet(char *s)
{
	int length, count;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	/* scan through string */

	length = 0;
	while (s[length] != '\0')
	/*check whether letters are found */
	{
		count = 0;
		while (count < 10)
		{
			if (letters[count] == s[length])
			{
				s[length] = numbers[count];
			}
			count++;
		}
		length++;
	}
	return (s);
}
