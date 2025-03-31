/*Longest Common Prefix of Strings
Given an array of strings arr[]. Return the longest common prefix among each and every strings present in the array. If there's no prefix common in all the strings, return "".

Examples :

Input: arr[] = ["geeksforgeeks", "geeks", "geek", "geezer"]
Output: "gee"
Explanation: "gee" is the longest common prefix in all the given strings.
Input: arr[] = ["hello", "world"]
Output: ""
Explanation: There's no common prefix in the given strings.
Constraints:
1 ≤ |arr| ≤ 103
1 ≤ |arr[i]| ≤ 103*/

#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string> arr) 
{
    if (arr.empty()) return "";
    string ans = "";
    sort(arr.begin(), arr.end());
    int n = arr.size();
    for(int i =0; i < arr[0].size(); i++)
    {
        if(arr[0][i] == arr[n-1][i])
        {
            ans += arr[0][i];
        }
        else
        {
            break;
        }
    }
    return ans;
    
}

int main()
{
    int n;
    cout << "Enter the size: ";
    cin>> n;
    vector<string> arr(n);
    for(int i = 0; i< n; i++)
    {
        cin >> arr[i];
    }
    string ans = longestCommonPrefix(arr);
    cout << ans;
    
    return 0;
}