int compare(const void *a, const void *b) {
    int x = *(int *)a;
    int y = *(int *)b;

    if (x < y)
        return -1;
    if (x > y)
        return 1;
    return 0;
}

int findNonMinOrMax(int* nums, int numsSize) {

    qsort(nums, numsSize, sizeof(int), compare);

    if (nums[0] == nums[numsSize - 1])
        return -1;
    if(numsSize<=2)
    {
        return -1;
    }

    return nums[1];
}