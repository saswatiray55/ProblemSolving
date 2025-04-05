/*1456. Maximum Number of Vowels in a Substring of Given Length
Given a string s and an integer k, return the maximum number of vowel letters in any substring of s with length k.

Vowel letters in English are 'a', 'e', 'i', 'o', and 'u'.

Example 1:

Input: s = "abciiidef", k = 3
Output: 3
Explanation: The substring "iii" contains 3 vowel letters.
Example 2:

Input: s = "aeiou", k = 2
Output: 2
Explanation: Any substring of length 2 contains 2 vowels.
Example 3:

Input: s = "leetcode", k = 3
Output: 2
Explanation: "lee", "eet" and "ode" contain 2 vowels.
 
Constraints:
1 <= s.length <= 105
s consists of lowercase English letters.
1 <= k <= s.length*/

#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}
int maxVowels(string s, int k) {
    int maxVowel = 0, left = 0, res = 0;
    for(int right = 0; right < s.size(); right++)
    {
        if(isVowel(s[right]))
        {
            res++;
        }
        if(right - left + 1 == k)
        {
            maxVowel = max(maxVowel, res);
            if(isVowel(s[left]))
            {
                res--;
            }
            left++;
        }
    }
    return maxVowel;
    
}

int main()
{
    string s;
    cout << "Enter the String: ";
    cin >> s;
    int k;
    cin >> k;
    int ans = maxVowels(s, k);
    cout << ans;
    
    return 0;
}