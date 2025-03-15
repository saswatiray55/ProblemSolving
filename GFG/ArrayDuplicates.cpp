/*Array Duplicates
Given an array arr of integers, find all the elements that occur more than once in the array. If no element repeats, return an empty array.

Examples:

Input: arr[] = [2, 3, 1, 2, 3]
Output: [2, 3] 
Explanation: 2 and 3 occur more than once in the given array.
Input: arr[] = [0, 3, 1, 2] 
Output: [] 
Explanation: There is no repeating element in the array, so the output is empty.
Input: arr[] = [2]
Output: [] 
Explanation: There is single element in the array. Therefore output is empty.
Constraints:
1 <= arr.size() <= 106
0 <= arr[i] <= 106
*/


#include <bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(vector<int>& arr) 
{
    vector<int> ans;
    unordered_map<int, int> mp;
    for(auto i : arr)
    {
        mp[i]++;
    }
    for(auto &i : mp)
    {
        if(i.second >= 2)
        {
            ans.push_back(i.first);
        }
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
    vector<int> ans = findDuplicates(arr);
    for(auto i : ans)
    {
        cout << i << " ";
    }
    
    return 0;
}