#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    int i = 0, j = s.length()-1;
    while(i < j)
    {
        if(!isalnum(s[i]))
        {
            i++;
        }
        else if(!isalnum(s[j]))
        {
            j--;
        }
        else if(tolower(s[i]) == tolower(s[j]))
        {
            i++, j--;
        }
        else
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