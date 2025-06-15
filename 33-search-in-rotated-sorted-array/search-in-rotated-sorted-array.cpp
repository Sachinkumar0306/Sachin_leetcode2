class Solution {
public:
    int search(vector<int>& nums, int t) {
        int left =0;
        int right=nums.size()-1;
        while(left<=right)
        {
            int mid=left+(right-left)/2;
            if(nums[mid]==t)
            return mid;
            if(nums[left]<=nums[mid])
            {
                if(nums[left]<=t && t<nums[mid])
                {
                    right=mid-1;
                }
                else
                left=mid+1;
            }
            else
            {
                if(nums[mid]<t && t<=nums[right])
                {
                    left=mid+1;
                }
                else
                right=mid-1;
            }
        }
        return -1;
    }
};