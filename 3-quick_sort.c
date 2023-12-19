#include "sort.h"

/**
 * swap - swaps two elements in an array
 * @array: array of integers
 * @i: index of first element
 * @j: index of second element
 * @size: size of array
 */

void swap(int *array, int i, int j, size_t size)
{
    int temp;

    temp = array[i];
    array[i] = array[j];
    array[j] = temp;
    print_array(array, size);
}

/**
 * partition - partitions array
 * @array: array of integers
 * @low: lowest index of array
 * @high: highest index of array
 * @size: size of array
 * Return: index of pivot
 */

int partition(int *array, int low, int high, size_t size)
{
    int pivot = array[high];
    int i = low - 1;
    int j;

    for (j = low; j <= high - 1; j++)
    {
        if (array[j] <= pivot)
        {
            i++;
            swap(array, i, j, size);
        }
    }
    swap(array, i + 1, high, size);
    return (i + 1);
}

/**
 * quicksort - sorts array recursively
 * @array: array of integers
 * @low: lowest index of array
 * @high: highest index of array
 * @size: size of array
 */

void quicksort(int *array, int low, int high, size_t size)
{
    int pi;

    if (low < high)
    {
        pi = partition(array, low, high, size);
        quicksort(array, low, pi - 1, size);
        quicksort(array, pi + 1, high, size);
    }
}

/**
 * quick_sort - sorts array using quick sort algorithm
 * @array: array of integers
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
    if (array == NULL || size < 2)
    {
        return;
    }
    quicksort(array, 0, size - 1, size);
}
