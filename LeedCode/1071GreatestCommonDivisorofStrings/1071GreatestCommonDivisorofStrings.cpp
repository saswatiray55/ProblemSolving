/*1071. Greatest Common Divisor of Strings

*/

#include<bits/stdc++.h>
using namespace std;

string gcdOfStrings(string str1, string str2) {
    string result = "";
    int n1 = str1.size(), n2 = str2.size();

    if(str1 + str2 != str2 + str1)
    {
        return "";
    }

    int gcdLength = gcd(n1, n2);
    return str1.substr(0, gcdLength);
    
}

int main()
{
    string s1, s2;
    cout << "Enter the String1: ";
    cin >> s1;
    cout << "Enter the String2: ";
    cin >> s2;
    string result = gcdOfStrings(s1, s2);
    cout << result << endl;
    return 0;
}