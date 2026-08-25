int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
int maxProduct(int n) {
    int arr[10];
    int i = 0;

    while (n > 0) {
        arr[i++] = n % 10;
        n /= 10;
    }

    qsort(arr, i, sizeof(int), compare);

    return arr[i - 1] * arr[i - 2];
}