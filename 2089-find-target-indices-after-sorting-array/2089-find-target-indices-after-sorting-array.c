/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
int* targetIndices(int* nums, int numsSize, int target, int* returnSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    int count = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == target)
            count++;
    }
    int *ans = malloc(count * sizeof(int));
    *returnSize = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == target)
            ans[(*returnSize)++] = i;
    }
    return ans;
}