#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - a function that searches astring for any set of bytes.
 * @s: input string
 * @accept: an input character to locate into string s
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is seen
 */
char *_strpbrk(char *s, char *accept)
{
char *start = accept;

while (*s)
{
while (*accept)
{
if (*accept == *s)
return (s);
accept++;
}

accept = start;
s++;
}
return (NULL);
}
