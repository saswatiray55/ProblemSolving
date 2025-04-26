/*125. Valid Palindrome
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.
Example 3:

Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
 

Constraints:
1 <= s.length <= 2 * 105
s consists only of printable ASCII characters.*/

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    int n = s.size();
    string result="";


    for(int i =0; i<n; i++)
    {
        char ch = tolower(s[i]);
        if((ch >= 'a' && ch<='z') || (ch >= '0' && ch<='9'))
        {
            result += ch;
        }
    }

    int m = result.size();
    for(int j =0; j<m/2; j++)
    {
        if(result[j] != result[m-j-1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
    cout << "Enter the String: ";
    getline(cin, s);
    isPalindrome(s) ? cout << "True" : cout << "False";
    return 0;
}