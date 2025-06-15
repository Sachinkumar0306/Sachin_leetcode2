class Solution {
public:
int getbu(vector<int>& bd,int mid,int k)
{
    int ncount=0;
    int count=0;
    for(int i=0;i<bd.size();i++)
    {
        if(bd[i]<=mid)
        {
            count++;
        }
        else
        {
            count=0;
        }
        if(count==k)
        {
            ncount++;
            count=0;
        }
    }
    return ncount;

}
    int minDays(vector<int>& bd, int m, int k) {
        int st=0;
        int end=0;
        for(int day:bd)
        {
            end=max(end,day);
        }
        int mindays=-1;
        while(st<=end)
        {
            int mid=(st+end)/2;
            if(getbu(bd,mid,k)>=m)
            {
                mindays=mid;
                end=mid-1;
            }
            else
            {
                st=mid+1;
            }
        }
        return mindays;
    }
};