#include "main.h"
/**
 *  * _strlen - checks string length
 *   *@s: string to check
 *    *
 *     * Return: length of string
 *      */
int _strlen(char *s)
{
		int len = 0;

			while (*s)
					{
								s++;
										len++;
											}

				return (len);
}


/**
 *  * rev_string  - reverses a string
 *   * @s: string to reverse
 *    *
 *     */
void rev_string(char *s)
{
		int len1 = _strlen(s);
			int counter = 0;
				char tmp;

					while (counter < len1 / 2)
							{
										tmp = *(s + counter);
												*(s + counter) = *(s + len1 - 1 - counter);
														*(s + len1 - 1 - counter) = tmp;
																counter++;
																	}
}
