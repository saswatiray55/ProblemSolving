/*Isomorphic Strings
Given two strings s1 and s2, check if these two strings are isomorphic to each other.

If the characters in s1 can be changed to get s2, then two strings, s1 and s2, are isomorphic. A character must be completely swapped out for another character while maintaining the order of the characters. A character may map to itself, but no two characters may map to the same character.

Examples:
Input: s1 = "aab", s2 = "xxy"
Output: true
Explanation: There are two different characters in aab and xxy, i.e a and b with frequency 2 and 1 respectively.
Input: s1 = "aab", s2 = "xyz"
Output: false
Explanation:  There are two different characters in aab but there are three different charactersin xyz. So there won't be one to one mapping between s1and s2.
Input: s1 = "aac", s2 = "xyz"
Output: false
Explanation: There are two different characters in aab but there are three different charactersin xyz. So there won't be one to one mapping between s1and s2.
Constraints:
1 <= |s1|, |s2| <= 105
*/

#include <bits/stdc++.h>
using namespace std;

bool areIsomorphic(string &s1, string &s2) 
{
    if(s1.length() != s2.length()) return false;
    unordered_map<char, int> mp1, mp2;
     for (int i = 0; i < s1.length(); i++)
     {
         if(mp1.find(s1[i]) == mp1.end())
         {
             mp1[s1[i]] = i;
         }
         if(mp2.find(s2[i]) == mp2.end())
         {
             mp2[s2[i]] = i;
         }
         if(mp1[s1[i]] != mp2[s2[i]])
         {
             return false;
         }
     }
     return true;
}

int main()
{
    string s1, s2;
    cout << "Enter the string1: ";
    cin >> s1;
    cout << "Enter the string2: ";
    cin >> s2;

    areIsomorphic(s1, s2) ? cout << "True" : cout << "False";
    
    return 0;
}