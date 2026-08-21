int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int *ans = malloc(2 * sizeof(int));
    *returnSize = 2;

    int i = 0;
    int j = numbersSize - 1;

    while(i < j) {
        int sum = numbers[i] + numbers[j];

        if(sum == target) {
            ans[0] = i + 1;
            ans[1] = j + 1;
            return ans;
        }
        
        if(sum < target)
            i++;
        else
            j--;
    }

    return NULL;
}