bool uniformArray(int* nums1, int nums1Size) {
    int minimum = nums1[0];
    for (int i = 1; i < nums1Size; i++) {
        if (nums1[i] < minimum) {
            minimum = nums1[i];
        }
    }
    if (minimum % 2 == 1) {
        return true;
    }
    for (int i = 0; i < nums1Size; i++) {
        if (nums1[i] % 2 == 1) {
            return false;
        }
    }
    return true; 
}