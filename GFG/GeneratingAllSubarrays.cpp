/*Generating All Subarrays
Given an array, arr[], generate all possible subarrays using recursion and return them as a vector of vectors.
The subarrays must be returned in the following order:
      1. Subarrays starting from the first element, followed by subarrays starting from the second element, and so on.
      2. For each starting index, subarrays should be in increasing length.

Examples: 

Input: arr[] = [1, 2, 3]
Output: [[1], [1, 2], [1, 2, 3], [2], [2, 3], [3]]
Explanation: Starting with the first element, we generate subarrays [1], [1, 2], and [1, 2, 3]. Then, starting from the second element, we get [2] and [2, 3].  Finally, starting from the third element, we only get [3].

Input: arr[] = [1, 2]
Output: [[1], [1, 2], [2]]
Explanation: Starting with the first element, we generate subarrays [1] and [1, 2]. Then, starting from the second element, we get [2].

Input: arr[] = [1, 1]
Output: [[1], [1, 1], [1]]
Explanation: Starting with the first element, we generate subarrays [1] and [1, 1] (including both elements). Starting from the second element, we only get the subarray [1].
Constraints:
1 <= arr.size() <= 103
1 <= arr[i] <= 106*/

#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > getSubArrays(vector<int>& arr)
{
    int n = arr.size();

    vector<vector<int>> ans;

    for(int i = 0; i <n; i++)
    {
        vector<int> temp;
        for(int j = i; j <n; j++)
        {
            temp.push_back(arr[j]);
            ans.push_back(temp);
        }

    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i< n; i++)
    {
        cin >> arr[i];
    }

    vector<vector<int>> result =  getSubArrays(arr);

    for(auto sub : result)
    {
        for(int temp : sub)
        {
            cout << temp << " ";
        }
        cout << endl;
    }
    return 0;

}