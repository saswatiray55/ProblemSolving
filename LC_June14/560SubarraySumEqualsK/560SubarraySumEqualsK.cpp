/*560. Subarray Sum Equals K
Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

A subarray is a contiguous non-empty sequence of elements within an array.

Example 1:

Input: nums = [1,1,1], k = 2
Output: 2
Example 2:

Input: nums = [1,2,3], k = 3
Output: 2
 
Constraints:
1 <= nums.length <= 2 * 104
-1000 <= nums[i] <= 1000
-107 <= k <= 107*/

#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int>& nums, int k) 
{
    unordered_map<int,int> subNum;
    subNum[0] = 1;
    int total = 0, count = 0;

    for(int n : nums)
    {
        total += n;

        if(subNum.find(total - k) != subNum.end())
        {
            count += subNum[total - k];
        }
        subNum[total]++;
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter the Size: ";
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i <n; i++)
    {
        cin >> arr[i];
    }
    int  k;
    cin >> k;
    int result = subarraySum(arr, k);

    cout << result;
    
    return 0;
}