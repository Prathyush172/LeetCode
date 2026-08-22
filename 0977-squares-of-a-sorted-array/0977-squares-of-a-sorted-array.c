/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int *ans=malloc(numsSize*sizeof(int));
    *returnSize=numsSize;
    int left=0;
    int right=numsSize-1;
    int pos=numsSize-1;
    while(left<=right)
    {
        int l=nums[left]*nums[left];
        int r=nums[right]*nums[right];
        if(l>r)
        {
            ans[pos]=l;
            left++;
        }
        else
        {
            ans[pos]=r;
            right--;
        }
        pos--;
    }
    return ans;
}