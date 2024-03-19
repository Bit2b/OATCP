#include <bits/stdc++.h>
const int MOD =(int)1000000000+7;
using namespace std;
int cases()
{
    int n;
    cin>>n;
    vector<vector<char>> grid(n,vector<char>(n));
    vector<vector<int>> dp(n,vector<int>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>grid[i][j];
        }
    }
    if(grid[0][0]=='*')
    {
        cout<<0<<endl;
        return 0;
    }
    dp[0][0]=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(grid[i][j]=='*')
                continue;
            if(i+1<grid.size() && grid[i+1][j]!='*')
                dp[i+1][j]=(dp[i+1][j]+dp[i][j])%MOD;
            if(j+1<grid.size() && grid[i][j+1]!='*')
                dp[i][j+1]=(dp[i][j+1]+dp[i][j])%MOD;
        }
    }
    cout<<dp[n-1][n-1]<<endl;
    return 0;
}
int main()
{
    freopen("grid_paths_test_file1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
    int t=1;
    while(t--){
        cases();
    }
    return 0;
}