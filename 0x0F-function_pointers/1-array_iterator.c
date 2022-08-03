#include <stdlib.h>

/**
 * array_iterator - a funtion that executes a function given as
 * a parameter on each element of an array.
 * @array: A pointer to array
 * @action; action(function) to iterate throw arrar
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;

if (action == NULL || array == NULL)
return;

for (; i < size; i++)
action(array[i]);
}
