/*209. Minimum Size Subarray Sum
Given an array of positive integers nums and a positive integer target, return the minimal length of a subarray whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.

Example 1:

Input: target = 7, nums = [2,3,1,2,4,3]
Output: 2
Explanation: The subarray [4,3] has the minimal length under the problem constraint.
Example 2:

Input: target = 4, nums = [1,4,4]
Output: 1
Example 3:

Input: target = 11, nums = [1,1,1,1,1,1,1,1]
Output: 0
 
Constraints:
1 <= target <= 109
1 <= nums.length <= 105
1 <= nums[i] <= 104*/

#include <bits/stdc++.h>
using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
    int n = nums.size();
    int finalAns = INT_MAX;
    int left = 0, sum = 0;
    for(int right=0; right < n; right++)
    {
        sum += nums[right];
        while(sum >= target)
        {
            finalAns = min(finalAns, right - left + 1);
            sum -= nums[left];
            left++;
        }
    }
    return (finalAns == INT_MAX) ? 0 : finalAns;
    
}

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;
    vector<int>arr(n);
    for(int i = 0; i<n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    int result = minSubArrayLen(target, arr);
    cout << result << " ";
    
    return 0;
}