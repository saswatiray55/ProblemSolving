/*49. Group Anagrams
Given an array of strings strs, group the anagrams together. You can return the answer in any order.

Example 1:

Input: strs = ["eat","tea","tan","ate","nat","bat"]

Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

Explanation:
There is no string in strs that can be rearranged to form "bat".
The strings "nat" and "tan" are anagrams as they can be rearranged to form each other.
The strings "ate", "eat", and "tea" are anagrams as they can be rearranged to form each other.
Example 2:

Input: strs = [""]

Output: [[""]]

Example 3:

Input: strs = ["a"]

Output: [["a"]]

 
Constraints:
1 <= strs.length <= 104
0 <= strs[i].length <= 100
strs[i] consists of lowercase English letters.*/

#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(auto x : strs)
        {
            string word = x;
            sort(word.begin(), word.end());
            mp[word].push_back(x);
        }
        vector<vector<string>>ans;
        for(auto x : mp)
        {
            ans.push_back(x.second);
        }
        return ans;
    }

int main()
{
    int n;
    cin >> n;
    vector<string> arr(n);
    for(int i = 0; i <n; i++)
    {
        cin >> arr[i];
    }
    vector<vector<string>> result = groupAnagrams(arr);

    for (auto group : result) 
    {
        cout << "[";
        for (auto word : group) {
            cout << word << " ";
        }
        cout << "]";
        cout << endl; 
    }
    return 0;
}