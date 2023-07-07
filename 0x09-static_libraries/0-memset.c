#include "main.h"
/**
* _memset - A fnctn that fills block of mem with specific value
* @s: memory starting address
* @b: desired value
* @n: number of bytes to be changed
* Return: changed array with new value for n bytes
*/
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;


for (; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
