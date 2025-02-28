#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) 
{

    int n = nums.size();
    vector<int> ans;

    vector<int> posNum;
    vector<int> negNum;

    for(int i = 0; i< n; i++)
    {
        if(nums[i] >= 0)
        {
            posNum.push_back(nums[i]);
        }
        else
        {
            negNum.push_back(nums[i]);
        }
    }
    for(int i = 0; i< posNum.size(); i++)
    {
        ans.push_back(posNum[i]);
        ans.push_back(negNum[i]);
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
    vector<int> ans = rearrangeArray(arr);
    for(auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}