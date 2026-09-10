/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int* findMissingElements(int* nums, int numsSize, int* returnSize) {
    qsort(nums, numsSize, sizeof(int), compare);
    int *ans = (int *)malloc(101 * sizeof(int));
    *returnSize = 0;
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = nums[i] + 1; j < nums[i + 1]; j++) {
            ans[(*returnSize)++] = j;
        }
    }
    return ans;
}