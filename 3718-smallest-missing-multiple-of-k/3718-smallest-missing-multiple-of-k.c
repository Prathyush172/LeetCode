int missingMultiple(int* nums, int numsSize, int k) {
    int found[101] = {0};

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] <= 100)
            found[nums[i]] = 1;
    }

    int x = k;

    while (x <= 100 && found[x]) {
        x += k;
    }

    return x;
}