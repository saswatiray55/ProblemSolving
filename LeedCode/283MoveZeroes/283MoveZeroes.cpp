/*283. Move Zeroes
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]
 
Constraints:
1 <= nums.length <= 104*/

#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) 
{
    int n = nums.size();
    int count = 0;
    for(int i = 0; i<n; i++)
    {
        
        if(nums[i] !=0)
        {
            swap(nums[count], nums[i]);
            count++;
        }
    }
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
    moveZeroes(arr);
    for(auto i : arr)
    {
        cout << i<< " ";
    }
    return 0;
}