/*728. Self Dividing Numbers
A self-dividing number is a number that is divisible by every digit it contains.

For example, 128 is a self-dividing number because 128 % 1 == 0, 128 % 2 == 0, and 128 % 8 == 0.
A self-dividing number is not allowed to contain the digit zero.

Given two integers left and right, return a list of all the self-dividing numbers in the range [left, right] (both inclusive).

Example 1:

Input: left = 1, right = 22
Output: [1,2,3,4,5,6,7,8,9,11,12,15,22]
Example 2:

Input: left = 47, right = 85
Output: [48,55,66,77]
 
Constraints:
1 <= left <= right <= 104*/

#include <bits/stdc++.h>
using namespace std;

bool isSelfDivided(int i)
{
    int temp = i;
    while(temp != 0)
    {
        if(temp % 10 == 0)
        {
            return false;
        }
        else if(i % (temp % 10) != 0)
        {
            return false;
        }
        temp /= 10;
    }
    return true;
}

vector<int> selfDividingNumbers(int left, int right) {
    vector <int> ans;
    for(int i = left; i<= right; i++)
    {
        if(isSelfDivided(i))
        {
            ans.push_back(i);
        }
    }
    return ans;
    
}

int main()
{
    int left, right;
    cout << "Enter left: ";
    cin >> left;
    cout << "Enter right: ";
    cin >> right;
    vector<int>ans = selfDividingNumbers(left, right);
    for(auto i : ans)
    {
        cout << i << " ";
    }
    
    return 0;
}