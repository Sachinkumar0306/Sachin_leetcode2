class Solution {
public:
    int robm(vector<int>& nums ,int st,int end) {
        int prev1=0;
        int prev2=0;
        for(int i=st;i<=end;i++)
        {
            int temp=max(prev1,prev2+nums[i]);
            prev2=prev1;
            prev1=temp;
        }
        return prev1;
    }
    int rob(vector<int>& nums)
    {
        int n=nums.size();
        if(n==1) return nums[0];
        if(n==2) return max(nums[0],nums[1]);
        int rob1=robm(nums,0,n-2);
        int rob2=robm(nums,1,n-1);
        return max(rob1,rob2);

    }
};