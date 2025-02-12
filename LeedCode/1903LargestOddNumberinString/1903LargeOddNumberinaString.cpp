/*1903. Largest Odd Number in String
You are given a string num, representing a large integer. Return the largest-valued odd integer (as a string) that is a non-empty substring of num, or an empty string "" if no odd integer exists.

A substring is a contiguous sequence of characters within a string.
Example 1:

Input: num = "52"
Output: "5"
Explanation: The only non-empty substrings are "5", "2", and "52". "5" is the only odd number.
Example 2:

Input: num = "4206"
Output: ""
Explanation: There are no odd numbers in "4206".
Example 3:

Input: num = "35427"
Output: "35427"
Explanation: "35427" is already an odd number.

Constraints:
1 <= num.length <= 105
num only consists of digits and does not contain any leading zeros.*/

#include<bits/stdc++.h>
using namespace std;

string largestOddNumber(string num) {
    int n = num.size();
    int first = 0, last = n-1;
    string result = "";
    for(int i = 0; i < n ; i++)
    {
        int number = (num[i] - '0');
        if(number == 0)
        {
            first++;
        }
        else
        {
            break;
        }
    }
    for(int i = n-1; i >= 0; i--)
    {
        int number = num[i] - '0';
        if(number % 2 == 0)
        {
            last--;
        }
        else
        {
            break;
        }
    }
    while(last >= first)
    {
        result += num[first];
        first++;
    }
    return result;
}

int main()
{
    string s;
    cout << "Enter the String: ";
    cin >> s;
    
    string result = largestOddNumber(s);
    cout << result << endl;
    return 0;
}