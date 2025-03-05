/*k-Anagram
Two strings are called k-anagrams if both of the below conditions are true.
1. Both have same number of characters.
2. Two strings can become anagram by changing at most k characters in a string.

Given two strings of lowercase alphabets and an integer value k, the task is to find if two strings are k-anagrams of each other or not.

Example:

Input: s1 = "fodr", s2 = "gork", k = 2
Output: true
Explanation: We can change 'f' -> 'g' and 'd' -> 'k' in s1.
Input: s1 = "geeks", s2 = "eggkf", k = 1
Output: false
Explanation: We can update or modify only 1 value but there is a need of modifying 2 characters i.e. 'g' and 'f' in s2.
Input: s1 = "adb", s2 = "fdab", k = 2
Output: false
Explanation: Both the strings have different numbers of characters.
Constraints:
1 ≤ s1.size(), s2.size() ≤ 105
1 ≤ k ≤ 105
*/

#include <bits/stdc++.h>
using namespace std;

bool areKAnagrams(string &s1, string &s2, int k) 
{
    if(s1.length() != s2.length())
    {
        return false;
    }
    unordered_map<char, int> mpp;
    for(auto ch : s1)
    {
        mpp[ch]++;
    }
    for(auto ch: s2)
    {
        if(mpp[ch] > 0)
        {
            mpp[ch]--;
        }
    }
    int count = 0;
    for(auto &i : mpp)
    {
        count += i.second;
    }
    if(count > k)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    string s1, s2;
    cout << "Enter the string1: ";
    cin >> s1;
    cout << "Enter the string2: ";
    cin >> s2;

    int k;
    cin >> k;
    areKAnagrams(s1, s2, k) ? cout << "True" : cout << "False";
    
    return 0;
}