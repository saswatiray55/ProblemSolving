/*557. Reverse Words in a String III
Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

Example 1:
Input: s = "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"
Example 2:

Input: s = "Mr Ding"
Output: "rM gniD"
 
Constraints:
1 <= s.length <= 5 * 104
s contains printable ASCII characters.
*/


#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    int n = s.length(), i = 0;
    string result = "";
    while(i < n)
    {
        while (i < n && s[i] == ' ') 
        {
            i++;
        }
        string temp = "";
        while(i<n && s[i] != ' ')
        {
            temp +=  s[i++];
        }
        reverse(temp.begin(), temp.end());
        if (!result.empty())
        {
            result += " ";
        }
        result += temp;
        
    }
    return result;   
}

int main()
{
    string s;
    cout << "Enter the String: ";
    getline(cin, s);
    cout << "Reversed words: " << reverseWords(s) << endl;
    return 0;
}