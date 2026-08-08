#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int lastStoneWeight(int* stones, int stonesSize)
{
    while (stonesSize > 1)
    {
        qsort(stones, stonesSize, sizeof(int), compare);

        int x = stones[stonesSize - 1];
        int y = stones[stonesSize - 2];

        stonesSize -= 2;

        if (x != y)
        {
            stones[stonesSize] = x - y;
            stonesSize++;
        }
    }

    if (stonesSize == 0)
        return 0;

    return stones[0];
}