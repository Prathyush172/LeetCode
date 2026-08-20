char** fizzBuzz(int n, int* returnSize) {

    char **arr = malloc(n * sizeof(char*));

    for (int i = 1; i <= n; i++) {

        arr[i - 1] = malloc(10 * sizeof(char));

        if (i % 3 == 0 && i % 5 == 0) {
            strcpy(arr[i - 1], "FizzBuzz");
        }
        else if (i % 3 == 0) {
            strcpy(arr[i - 1], "Fizz");
        }
        else if (i % 5 == 0) {
            strcpy(arr[i - 1], "Buzz");
        }
        else {
            sprintf(arr[i - 1], "%d", i);
        }
    }

    *returnSize = n;
    return arr;
}