#include <stdio.h>

/**
 * main - program prints all single digit numbers of base 10 starting from 0,
 *  followed by a new line.
 *  Return: Always 0
 */
int main(void)
{
int ch;
for (ch = 48; ch <= 57; ch--)
{

putchar(ch);
}

putchar(10); /* this is an ascii code for new line*/

return (0);
}
