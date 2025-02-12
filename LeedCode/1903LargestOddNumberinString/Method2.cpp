#include<bits/stdc++.h>
using namespace std;

string largestOddNumber(string num) {
    int n = num.size();
    int first = 0, last = n - 1;
    string result = "";

    while (first < n && num[first] == '0') 
    {
        first++;
    }

    while (last >= 0 && (num[last] - '0') % 2 == 0) {
        last--;
    }
    if (last < first) {
        return "";
    }

    return num.substr(first, last - first + 1);
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