/*
Given two binary strings a and b, return their sum as a binary string.

Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"

Constraints:
1 <= a.length, b.length <= 104
a and b consist only of '0' or '1' characters.
Each string does not contain leading zeros except for the zero itself.
*/


#include <bits/stdc++.h>
using namespace std;

string addBinary(string s1, string s2) {
    int i = s1.size() - 1, j = s2.size() - 1, carry = 0;
    string result = "";

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += s1[i--] - '0';
        if (j >= 0) sum += s2[j--] - '0';
        
        result += (sum % 2) + '0';  // Append binary digit
        carry = sum / 2; 
    }

    reverse(result.begin(), result.end());  
    return result;
}

int main() 
{
    // string s1 = "1101", s2 = "111";
    string s1, s2;
    cout << "Enter String1: ";
    cin >> s1;
    cout << "Enter String2: ";
    cin >> s2;
    
    string result = addBinary(s1, s2); // Output: 10100
    cout << result << endl;
    return 0;
}
