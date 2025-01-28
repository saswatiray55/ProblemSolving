#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int>& nums)
{
    unordered_map<int, int> mp;
    int ans = 0;
    for(int i =0 ;i<nums.size(); i++)
    {
        mp[nums[i]]++;
    }
    for(auto &i : mp)
    {
        if(i.second >= 2)
        {
            ans = i.first;
        }
    }
    return ans;


}

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;
    vector<int>arr(n);
    for(int i = 0; i<n; i++)
    {
        cin >>arr[i];
    }
    int result = findDuplicate(arr);
    cout << result << endl;
    return 0;
}