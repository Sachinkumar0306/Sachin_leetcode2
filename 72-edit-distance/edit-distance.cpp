class Solution {
public:
int md(string& word1, string& word2,int i,int j,vector<vector<int>>&dp)
{
    if(dp[i][j]!=-1) return dp[i][j];
    if(i==0) return j;
    if(j==0) return i;
    if(word1[i-1]==word2[j-1])
    return dp[i][j]=md(word1,word2,i-1,j-1,dp);
    else
    {
        int io=1+md(word1,word2,i,j-1,dp);
        int de=1+md(word1,word2,i-1,j,dp);
        int rp=1+md(word1,word2,i-1,j-1,dp);
        return dp[i][j]=min(io,min(de,rp));
    }
}
    int minDistance(string word1, string word2) {
        vector<vector<int>>dp(word1.size()+1,vector<int>(word2.size()+1,-1));
        return md(word1,word2,word1.size(),word2.size(),dp);
    }
};