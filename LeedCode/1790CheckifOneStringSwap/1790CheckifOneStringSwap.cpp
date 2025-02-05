/*1790. Check if One String Swap Can Make Strings Equal

You are given two strings s1 and s2 of equal length. A string swap is an operation where you choose two indices in a string (not necessarily different) and swap the characters at these indices.

Return true if it is possible to make both strings equal by performing at most one string swap on exactly one of the strings. Otherwise, return false.

 

Example 1:

Input: s1 = "bank", s2 = "kanb"
Output: true
Explanation: For example, swap the first character with the last character of s2 to make "bank".
Example 2:

Input: s1 = "attack", s2 = "defend"
Output: false
Explanation: It is impossible to make them equal with one string swap.
Example 3:

Input: s1 = "kelb", s2 = "kelb"
Output: true
Explanation: The two strings are already equal, so no string swap operation is required.
 

Constraints:

1 <= s1.length, s2.length <= 100
s1.length == s2.length
s1 and s2 consist of only lowercase English letters.*/
#include<bits/stdc++.h>
using namespace std;

bool areAlmostEqual(string s1, string s2) 
{
    if(s1 == s2)
    {
        return true;
    }
    int s1FrequencyMap[26] = {0};
    int s2FrequencyMap[26] = {0};
    int numDiffs = 0;

    for(int i = 0; i<s1.size(); i++)
    {
        char s1Char = s1[i];
        char s2Char = s2[i];

        if(s1Char != s2Char)
        {
            numDiffs++;

            if(numDiffs > 2) return false;
        }
        s1FrequencyMap[s1Char - 'a']++;
        s2FrequencyMap[s2Char - 'a']++;
    }
    for(int i = 0; i<26; i++)
    {
        if (s1FrequencyMap[i] != s2FrequencyMap[i]) return false;
    }
    return true;
}

int main()
{
    string s1, s2;
    cout << "Enter the String1: ";
    cin >> s1;
    cout << "Enter the String2: ";
    cin >> s2;
    areAlmostEqual(s1, s2) ? cout << "true" : cout << "false";
    return 0;
}