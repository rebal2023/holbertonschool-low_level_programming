#include "search_algos.h"

/**
* binary_search - searches for value in sorted array using Binary search algo
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
* Return: index where value is located or -1
*/

int binary_search(int *array, size_t size, int value)
{
size_t l, r, mid, i;

if (!array)
return (-1);

l = 0;
r = size - 1;

while (l <= r)
{
mid = (l + r) / 2;
printf("Searching in array: ");
for (i = l; i <= r; i++)
printf("%i%s", array[i], i == r ? "\n" : ", ");

if (array[mid] < value)
l = mid + 1;

else if (array[mid] > value)
r = mid - 1;

else
return ((int)mid);
}
return (-1);
}
