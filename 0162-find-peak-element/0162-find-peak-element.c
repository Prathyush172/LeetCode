int findPeakElement(int* nums, int numsSize) {
for(int i=0;i<numsSize-1;i++)
{
    if(nums[i]>nums[i+1])
    {
        return i;
    }
}
return numsSize-1;;
}





//  int left=0;
//     int right=numsSize-1;
//     while(left<right)
//     {
//         int mid=left+(right-left)/2;
//         if(nums[mid]<)
//     }