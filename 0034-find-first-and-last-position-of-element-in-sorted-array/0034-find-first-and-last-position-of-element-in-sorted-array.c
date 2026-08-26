int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int* ans = malloc(2 * sizeof(int));
    *returnSize = 2;

    int l = 0, r = numsSize - 1;
    ans[0] = -1;
    ans[1] = -1;

    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (nums[mid] == target) {
            ans[0] = mid;
            r = mid - 1;
        }
        else if (nums[mid] < target)
            l = mid + 1;
        else
            r = mid - 1;
    }

    l = 0;
    r = numsSize - 1;

    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (nums[mid] == target) {
            ans[1] = mid;
            l = mid + 1;
        }
        else if (nums[mid] < target)
            l = mid + 1;
        else
            r = mid - 1;
    }

    return ans;
}