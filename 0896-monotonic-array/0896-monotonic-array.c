bool isMonotonic(int* nums, int numsSize) {
    int  inc=1;
    int dec=1;
    for(int i=1;i<numsSize;i++)
    {
        if(nums[i]>nums[i-1])
        {
            dec=0;
        }
        else if(nums[i]<nums[i-1])
        {
            inc=0;
        }
    }
    return inc || dec;
}