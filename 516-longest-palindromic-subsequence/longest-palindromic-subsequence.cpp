class Solution {
public:
   int lcs(string& s1,string& s2,int i,int j,int n,int m,vector<vector<int>>&dp)
{
    if(i>=n||j>=m) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    if(s1[i]==s2[j])
    return dp[i][j]=1+lcs(s1,s2,i+1,j+1,n,m,dp);
    else
    return dp[i][j]=max(lcs(s1,s2,i+1,j,n,m,dp),lcs(s1,s2,i,j+1,n,m,dp));
}
    int longestPalindromeSubseq(string s1) {
        string s2=s1;
        reverse(s2.begin(),s2.end());
        int n=s1.size();
        int m=s2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return lcs(s1,s2,0,0,n,m,dp);
    }
};