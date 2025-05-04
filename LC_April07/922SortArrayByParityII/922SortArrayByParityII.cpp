/*922. Sort Array By Parity II
Given an array of integers nums, half of the integers in nums are odd, and the other half are even.

Sort the array so that whenever nums[i] is odd, i is odd, and whenever nums[i] is even, i is even.

Return any answer array that satisfies this condition.

Example 1:

Input: nums = [4,2,5,7]
Output: [4,5,2,7]
Explanation: [4,7,2,5], [2,5,4,7], [2,7,4,5] would also have been accepted.
Example 2:

Input: nums = [2,3]
Output: [2,3]
 
Constraints:

2 <= nums.length <= 2 * 104
nums.length is even.
Half of the integers in nums are even.
0 <= nums[i] <= 1000*/

#include <bits/stdc++.h>
using namespace std;

vector<int> sortArrayByParityII(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, 0);
    int posInt = 0, negInt = 1;
    for(int i  =0; i< n; i++)
    {
        if(nums[i] % 2 == 0)
        {
            ans[posInt] = nums[i];
            posInt += 2;
        }
        else
        {
            ans[negInt] = nums[i];
            negInt += 2;
        }
    }
    return ans;
    
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    for(int i =0 ; i< n; i++)
    {
        cin >> arr[i];
    }
    
    vector<int> ans = sortArrayByParityII(arr);
    for(int i : ans)
    {
        cout << i << " ";
    }
    return 0;
}