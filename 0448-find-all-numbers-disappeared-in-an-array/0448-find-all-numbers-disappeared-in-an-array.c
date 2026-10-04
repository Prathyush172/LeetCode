/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int *ans = (int *)malloc(numsSize * sizeof(int));
    *returnSize = 0;
    qsort(nums, numsSize, sizeof(int), compare);
    int j = 0;
    for (int i = 1; i <= numsSize; i++) {
        while (j < numsSize && nums[j] < i) {
            j++;
        }
        if (j == numsSize || nums[j] != i) {
            ans[*returnSize] = i;
            (*returnSize)++;
        }
    }
    return ans;
}