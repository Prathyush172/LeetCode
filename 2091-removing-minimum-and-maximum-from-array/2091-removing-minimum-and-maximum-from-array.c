int minimumDeletions(int* nums, int numsSize) {
    int min = 0;
    int max = 0;

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] < nums[min]) {
            min = i;
        }

        if (nums[i] > nums[max]) {
            max = i;
        }
    }

    if (min > max) {
        int temp = min;
        min = max;
        max = temp;
    }

    int left = max + 1;
    int right = numsSize - min;
    int both = (min + 1) + (numsSize - max);

    int ans = left;

    if (right < ans)
        ans = right;

    if (both < ans)
        ans = both;

    return ans;
}