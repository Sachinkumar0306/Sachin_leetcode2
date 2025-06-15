class Solution {
public:
    int minEatingSpeed(vector<int>& p, int h) {
       int left=1;
       int  right=0;
       for(int i=0;i<p.size();i++)
       {
        if(p[i]>right)
        right=p[i];
       }
       int ans=right;
       while(left<=right)
       {
        int mid=left+(right-left)/2;
        long long hr=0;
        for (int i=0;i<p.size();i++)
        {
            hr+=(p[i]+mid -1)/mid;
        }
        if(hr<=h)
        {
            ans=mid;
            right=mid-1;
        }
        else
        {
            left=mid +1;
        }
       }
       return ans;
    }
};