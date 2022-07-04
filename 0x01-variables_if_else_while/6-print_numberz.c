#include <stdio.h>

/**
 * main - program prints all single digit numbers of base 10 starting from 0,
 *  followed by a new line.
 *  Return: Always 0
 */
int main(void)
{
char letter;
for (letter = 'z'; letter >= 'a'; letter--)
putchar(letter);
putchar('\n');
return (0);
}
