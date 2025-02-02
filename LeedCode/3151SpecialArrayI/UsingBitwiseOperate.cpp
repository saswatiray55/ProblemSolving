#include <bits/stdc++.h>
using namespace std;

bool isArraySpecial(vector<int>& nums)
{
    for(int index = 0; index < nums.size()-1; index++)
    {
        if((nums[index] & 1 ) ^ (nums[index + 1] & 1) ==0)
        {
            return false;
        }
    }
    return true;
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
    isArraySpecial(arr) ? cout << "True" : cout << "False";
    return 0;
}