#include "main.h"
#include <string.h>

/**
 *  * _strncpy -> function to copy string
 *   * @dest: first parameter
 *    * @src: second parameter
 *     * @n: third parameter
 *      *
 *       * Return: string
 *        */
char *_strncpy(char *dest, char *src, int n)
{
		strncpy(dest, src, n);
		return (dest);
}
