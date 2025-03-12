/*371. Sum of Two Integers
Given two integers a and b, return the sum of the two integers without using the operators + and -.

Example 1:

Input: a = 1, b = 2
Output: 3
Example 2:

Input: a = 2, b = 3
Output: 5
 

Constraints:
-1000 <= a, b <= 1000*/

#include <bits/stdc++.h>
using namespace std;

int getSum(int a, int b)
{
    while(b != 0)
    {
        int carry = (a & b) << 1;
        a = a ^ b;
        b = carry;
    }
    return a;
}

int main()
{
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    int result = getSum(a,b);
    cout << result;
    return 0;
}