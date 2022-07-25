#include "main.h"
#include <unistd.h>

/**
 * main - check description
 * Description: prints the word putchar, followed by a new line.
 * Return: 0.
 */
int main(void)
{
char word[8] = "_putchar";
int i;

for (i = 0; i < 8; i++)
_putchar(word[i]);
_putchar('\n');

return (0);
}
