/*Kaprekar Number
Given a number N. Check if it is a Kaprekar number or not.
Note:- A Kaprekar number is a number whose square when divided into two parts the sum of those parts is equal to the original number and none of the parts has value 0. Now given a number, your task is to check if it is Kaprekar number or not.


Example 1:

Input:
N=45
Output:
1
Explanation:
45*45=2025. Now, 20+25=45.
Thus, 45 is a kaprekar number.

Example 2:

Input:
N=20
Output:
0
Explanation:
20*20=400.There is no way to divide
400 into two parts such that their sum is equal
to 20.So, 20 is not a kaprekar number.

Your Task:
You don't need to read input or print anything.Your Task is to complete the function isKaprekar() which takes the number N as input parameter and returns 1 if N is a kaprekar number.Otherwise, it returns 0.

Expected Time Complexity:O(LogN)
Expected Auxillary Space:O(1) 


Constraints:
1<=N<=104*/

#include <bits/stdc++.h>
using namespace std;

int isKaprekar(int N) 
{
    if(N == 1)
    {
        return 1;
    }
    long long square = (long long)N * N;
    string sqrstr = to_string(square);
    int len = sqrstr.length();
    for(int i = 1; i < len; i++)
    {
        int left = stoi(sqrstr.substr(0,i));
        int right = stoi(sqrstr.substr(i));
        if(right != 0 && (left + right == N))
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    isKaprekar(n) ? cout << "Yes" : cout << "No";
    // cout << result << " ";
    return 0;
}