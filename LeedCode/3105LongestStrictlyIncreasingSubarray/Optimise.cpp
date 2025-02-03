#include <bits/stdc++.h>
using namespace std;

int longestMonotonicSubarray(vector<int>& nums) 
{
    int n = nums.size();
    int incLength = 1, decLength = 1, maxLength = 1;
    for(int i = 0; i<n-1; i++)
    {
        if(nums[i+1] > nums[i])
        {
            incLength++;
            decLength = 1;
        }
        else if(nums[i+1] < nums[i])
        {
            decLength++;
            incLength = 1;
        }
        else
        {
            incLength = 1;
            decLength = 1;
        }
        maxLength = max(maxLength, max(incLength, decLength));
    }
    return maxLength;
}

int main()
{
    int n;
    cout << "Enter the Size: ";
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i< n; i++)
    {
        cin >> arr[i];
    }
    int result = longestMonotonicSubarray(arr); 
    cout << result;
    return 0;
}