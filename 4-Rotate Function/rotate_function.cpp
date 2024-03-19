#include <bits/stdc++.h>
const int MOD = (int)1000000000 + 7;
using namespace std;
int maxRotateFunction(vector<int>& nums) {
    if (nums.empty()) return 0;

    long long allsum = 0, sum2 = 0;
    for (int i = 0; i < nums.size(); i++) {
        allsum += nums[i] * i;
        sum2 += nums[i];
    }

    long long result = allsum;
    for (int i = 0; i < nums.size(); i++) {
        allsum -= sum2;
        allsum += nums[i];
        allsum += nums[i] * int(nums.size() - 1);
        result = max(allsum, result);
    }

    return result;
}
int solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for (int &val : v)
    {
        cin >> val;
    }
    cout<<maxRotateFunction(v)<<endl;
    return 0;
}
int main()
{
        vector<string> input = {
            "Rotate_Function_input_1.txt",
            "Rotate_Function_input_2.txt",
            "Rotate_Function_input_3.txt"};
        vector<string> output = {
            "output1.txt",
            "output2.txt",
            "output3.txt"};
        for (int i = 0; i < 3; i++)
        {
                freopen(input[i].c_str(), "r", stdin);
                freopen(output[i].c_str(), "w", stdout);
                solve();
                fclose(stdin);
                fclose(stdout);
        }
        return 0;
}