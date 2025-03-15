/*Remove Duplicates from unsorted array
Given an array arr of integers which may or may not contain duplicate elements. Your task is to remove duplicate elements.

Examples:
Input: arr[] = [1, 2, 3, 1, 4, 2]
Output: [1, 2, 3, 4]
Explanation: 2 and 1 have more than 1 occurence.

Input: arr[] = [1, 2, 3, 4]
Output: [1, 2, 3, 4]
Explanation: There is no duplicate element.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)

Constraints:
1<=arr.size()<=106
1<=arr[i]<=105
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> removeDuplicate(vector<int>& arr)
{
    vector<int> ans;
    unordered_map<int, int> mp;
    for(int i = 0; i< arr.size(); i++)
    {
        if(mp.find(arr[i]) == mp.end())
        {
            mp[arr[i]] = i;
            ans.push_back(arr[i]);
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the number of Element: ";
    cin >> n;
    vector<int> arr(n);
    for(int i =0; i< n; i++)
    {
        cin >> arr[i];
    }
    vector<int > ans = removeDuplicate(arr);
    for(auto i : ans)
    {
        cout << i << " ";
    }
    return 0;

}