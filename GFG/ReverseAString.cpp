// Reverse a String

#include <bits/stdc++.h>
using namespace std;

string reverseObj(string s) 
{
    int left = 0;
    int right = s.length() -1;
    while(left < right)
    {
        swap(s[left], s[right]);
        left++;
        right--;
    }
    return s;
}

int main() 
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string res = reverseObj(str);
    cout << res;
    return 0;
}