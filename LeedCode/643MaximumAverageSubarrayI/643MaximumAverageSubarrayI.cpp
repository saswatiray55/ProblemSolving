/*643. Maximum Average Subarray I
You are given an integer array nums consisting of n elements, and an integer k.

Find a contiguous subarray whose length is equal to k that has the maximum average value and return this value. Any answer with a calculation error less than 10-5 will be accepted.

Example 1:

Input: nums = [1,12,-5,-6,50,3], k = 4
Output: 12.75000
Explanation: Maximum average is (12 - 5 - 6 + 50) / 4 = 51 / 4 = 12.75
Example 2:

Input: nums = [5], k = 1
Output: 5.00000
 

Constraints:

n == nums.length
1 <= k <= n <= 105
-104 <= nums[i] <= 104*/


#include <bits/stdc++.h>
using namespace std;

double findMaxAverage(vector<int>& nums, int k) {
    double ans = 0;
    int n = nums.size();
    int windowSum = 0;
    for(int i = 0; i<k; i++)
    {
        windowSum += nums[i];
    }
    double maxSum = windowSum;
    for(int i = k; i<n; i++)
    {
        windowSum += nums[i] - nums[i - k];
        if(windowSum > maxSum)
        {
            maxSum = windowSum;
        }
    }
    return (maxSum/k); 
    
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
    double result = findMaxAverage(arr, k);
    cout << result << endl;
    return 0;
}