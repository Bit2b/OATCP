#include <bits/stdc++.h>
const int MOD =(int)1000000000+7;
using namespace std;
int cases()
{
    int n;
    cin>>n;
    if(n<0){
        cout<<-1<<endl;
        return 0;
    }
    vector<int>dp(n+1);
    dp[0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int x=1;x<=6;x++)
        {
            if(x>i)
                break;
            dp[i]=(dp[i]+dp[i-x])%MOD;
        }
    }
    cout<<dp[n]<<endl;
    return 0;
}
int main()
{
    freopen("coin_problem_test_files.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin>>t;
    while(t--){
        cases();
    }
    return 0;
}