int compare(const void *a, const void *b)
{
    int val1 = *(const int *)a;
    int val2 = *(const int *)b;

    return (val1 > val2) - (val1 < val2);
}
int maximumGap(int* nums, int numsSize)
{
    if (numsSize < 2)
    {
        return 0;
    }
    qsort(nums, numsSize, sizeof(int), compare);
    int maxgap = 0;
    for (int i = 1; i < numsSize; i++)
    {
        int gap = nums[i] - nums[i - 1];
        if (gap > maxgap)
        {
            maxgap = gap;
        }
    }
    return maxgap;
}
