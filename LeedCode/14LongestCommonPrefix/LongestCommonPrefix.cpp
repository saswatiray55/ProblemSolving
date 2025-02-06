/*
14. Longest Common Prefix
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
 
Constraints:
1 <= strs.length <= 200
0 <= strs[i].length <= 200
strs[i] consists of only lowercase English letters if it is non-empty.
*/

#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs)
{
    if(strs.empty())
    {
        return "";
    }
    sort(strs.begin(), strs.end());
    string first = strs[0],  last = strs.back(), result="";
    for(int i = 0; i< first.size(); i++)
    {
        if(i < last.size() && first[i] == last[i])
        {
            result += first[i];
        }
    }
    return result;

}

int main()
{
    int n;
    cout << "Enter number of strings: ";
    cin >> n;

    vector<string> strs(n);
    for(int i = 0; i< n; i++)
    {
        cin >> strs[i];
    }
    string result = longestCommonPrefix(strs);
    cout << result;
    return 0;
}