#include <unistd.h>
include "main.h"

/**
 * main - check description
 * Description: prints the word putchar
 * Return: 0.
 */
int main(void)
{
char word[7] = "putchar";
int i;

for (i = 0; i < 7; i++)
_putchar(word[i]);
_putchar('\n');

return (0);
}
