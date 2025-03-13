/*3. Longest Substring Without Repeating Characters
Given a string s, find the length of the longest substring without duplicate characters.

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 

Constraints:
0 <= s.length <= 5 * 104
s consists of English letters, digits, symbols and spaces.*/

#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    int left = 0;
    int maxLength = 0;
    unordered_set<char> st;

    for(int i = 0; i < s.length(); i++)
    {
        while(st.find(s[i]) != st.end())
        {
            st.erase(s[left]);
            left++;
        }
        st.insert(s[i]);
        maxLength = max(maxLength, i - left +1);
    }
    return maxLength;
}

int main()
{
    string s;
    cout << "Enter the String: ";
    cin >> s;
    int result = lengthOfLongestSubstring(s);
    cout << result << " ";
    return 0;
}