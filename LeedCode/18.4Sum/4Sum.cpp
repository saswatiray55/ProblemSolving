/*18. 4Sum
Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

0 <= a, b, c, d < n
a, b, c, and d are distinct.
nums[a] + nums[b] + nums[c] + nums[d] == target
You may return the answer in any order.

Example 1:

Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
Example 2:

Input: nums = [2,2,2,2,2], target = 8
Output: [[2,2,2,2]]

Constraints:

1 <= nums.length <= 200
-109 <= nums[i] <= 109
-109 <= target <= 109*/

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {      
    int n = nums.size();
    set<vector<int>> st;
    for(int i = 0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            set<long long> hashset;
            for(int k = j+1; k<n; k++)
            {
                long long sum = nums[i] + nums[j];
                sum += nums[k];
                long long fourth = target - (sum);
                if(hashset.find(fourth) != hashset.end())
                {
                    vector<int> temp = {nums[i], nums[j], nums[k], (int)fourth};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                hashset.insert(nums[k]);
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;       
}

int main()
{
    int n, k;
    cout << "Enter size of n: ";
    cin >> n;
    vector<int>arr(n);
    for(int i = 0; i<n; i++)
    {
        cin >>arr[i];
    }
    cin >> k;
    vector<vector<int>> ans = fourSum(arr, k);
    for (auto v : ans) {
        for (int x : v) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}