int firstStableIndex(int* nums, int numsSize, int k) {

    for (int i = 0; i < numsSize; i++) {

        int max = nums[0];

        for (int j = 0; j <= i; j++) {
            if (nums[j] > max) {
                max = nums[j];
            }
        }


        int min = nums[i];

        for (int j = i; j < numsSize; j++) {
            if (nums[j] < min) {
                min = nums[j];
            }
        }


        int score = max - min;

        if (score <= k) {
            return i;
        }
    }

    return -1;
}