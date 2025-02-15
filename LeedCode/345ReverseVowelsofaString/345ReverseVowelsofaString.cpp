/*345. Reverse Vowels of a String
Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

Example 1:

Input: s = "IceCreAm"

Output: "AceCreIm"

Explanation:
The vowels in s are ['I', 'e', 'e', 'A']. On reversing the vowels, s becomes "AceCreIm".

Example 2:

Input: s = "leetcode"

Output: "leotcede"

Constraints:
1 <= s.length <= 3 * 105
s consist of printable ASCII characters.*/

#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
    c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

string reverseVowels(string s) {
    int low = 0, high = s.size()-1;
    while(low < high)
    {
        if(isVowel(s[low]) && isVowel(s[high]))
        {
            swap(s[low], s[high]);
            low++;
            high--;
        }
        if(!isVowel(s[low]))
        {
            low++;
        }
        if(!isVowel(s[high]))
        {
            high--;
        }
    }
    return s;
    
}

int main()
{
    string s;
    cout << "Enter the String: ";
    cin >> s;
    string result = reverseVowels(s);
    cout << result;
    return 0;
}