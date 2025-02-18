/*Array Subset
Given two arrays a[] and b[], your task is to determine whether b[] is a subset of a[].

Examples:
Input: a[] = [11, 7, 1, 13, 21, 3, 7, 3], b[] = [11, 3, 7, 1, 7]
Output: true
Explanation: b[] is a subset of a[]

Input: a[] = [1, 2, 3, 4, 4, 5, 6], b[] = [1, 2, 4]
Output: true
Explanation: b[] is a subset of a[]

Input: a[] = [10, 5, 2, 23, 19], b[] = [19, 5, 3]
Output: false
Explanation: b[] is not a subset of a[]

Constraints:
1 <= a.size(), b.size() <= 105
1 <= a[i], b[j] <= 106*/


#include <bits/stdc++.h>
using namespace std;

bool isSubset(vector<int> &a, vector<int> &b) 
{
    unordered_map<int, int> mp;
    for(auto i : a)
    {
        mp[i]++;
    }
    for(auto i : b)
    {
        if(mp[i] > 0)
        {
            mp[i]--;
        }
        else
        {
            return false;
        }
    }
    return true;
    
}

int main()
{
    int n1, n2;
    cout << "Enter size of n1: ";
    cin >> n1;
    vector<int>arr1(n1);
    for(int i = 0; i<n1; i++)
    {
        cin >>arr1[i];
    }
    cout << "Enter size of n2: ";
    cin >> n2;
    vector<int>arr2(n2);
    for(int i = 0; i<n2; i++)
    {
        cin >>arr2[i];
    }
    isSubset(arr1, arr2) ? cout << "true" : cout << "false";
    return 0;
}