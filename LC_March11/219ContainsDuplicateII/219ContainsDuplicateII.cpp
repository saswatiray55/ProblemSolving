/*219. Contains Duplicate II
Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.

Example 1:

Input: nums = [1,2,3,1], k = 3
Output: true
Example 2:

Input: nums = [1,0,1,1], k = 1
Output: true
Example 3:

Input: nums = [1,2,3,1,2,3], k = 2
Output: false
 

Constraints:
1 <= nums.length <= 105
-109 <= nums[i] <= 109
0 <= k <= 105*/

#include <bits/stdc++.h>
using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k) 
{
    unordered_set<int> s;
    for(int i = 0; i<nums.size(); i++)
    {
        if(s.find(nums[i]) != s.end())
        {
            return true;
        }
        s.insert(nums[i]);
        if(i >= k)
        {
            s.erase(nums[i - k]);
        }
    }
    return false;    
}

int main()
{
    int n, k;
    cout << "Enter the size: ";
    cin >> n;
    vector<int>arr(n);
    for(int i = 0; i<n; i++)
    {
        cin >>arr[i];
    }
    cin >> k;
    containsNearbyDuplicate(arr, k) ? cout << "True" : cout << "False";
    return 0;
}
