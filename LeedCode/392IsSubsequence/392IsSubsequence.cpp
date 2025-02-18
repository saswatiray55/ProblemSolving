/*392. Is Subsequence
Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

A subsequence of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., "ace" is a subsequence of "abcde" while "aec" is not).


Example 1:
Input: s = "abc", t = "ahbgdc"
Output: true

Example 2:

Input: s = "axc", t = "ahbgdc"
Output: false
 
Constraints:
0 <= s.length <= 100
0 <= t.length <= 104
s and t consist only of lowercase English letters.*/

#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(string s, string t)
{
    int sp = 0;
    int tp = 0;

    while(sp < s.length(), tp < t.length())
    {
        if(s[sp] == t[tp])
        {
            sp++;
        }
        tp++;
    }
    return sp == s.length();
}

int main() 
{

    string s, t;
    cout << "Enter String1: ";
    cin >> s;
    cout << "Enter String2: ";
    cin >> t;
    
    isSubsequence(s,t) ? cout << "true" : cout << "false";
    return 0;
}