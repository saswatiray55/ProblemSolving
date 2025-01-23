/*
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000

xample 1:

Input: s = "III"
Output: 3
Explanation: III = 3.
Example 2:

Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.
Example 3:

Input: s = "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.

*/


#include<bits/stdc++.h>
using namespace std;

int romanToInt(string s)
{
    int ans = 0;
    unordered_map<char, int> mp{
        {'I', 1},
        {'V', 5},
        {'X', 10}, 
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    for (int i = 0; i < s.size() - 1; i++) 
    {
        if (mp[s[i]] < mp[s[i + 1]]) {
            ans -= mp[s[i]];
        }
        else
        {
            ans += mp[s[i]];
        }
    }
    ans += mp[s[s.size() - 1]];
    return ans;
}

int main()
{
    string str;
    cout << "Enter the Roman Digit: ";
    cin>>str;
    cout << romanToInt(str) << endl;
    return 0;
}