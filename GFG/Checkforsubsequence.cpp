/*Check for subsequence
Given two strings A and B, find if A is a subsequence of B.

Example 1:
Input:
A = AXY 
B = YADXCP
Output: 0 
Explanation: A is not a subsequence of B
as 'Y' appears before 'A'.
 
Example 2:
Input:
A = gksrek
B = geeksforgeeks
Output: 1
Explanation: A is a subsequence of B.

Your Task:  
You dont need to read input or print anything. Complete the function isSubSequence() which takes A and B as input parameters and returns a boolean value denoting if A is a subsequence of B or not. 

Expected Time Complexity: O(N) where N is length of string B.
Expected Auxiliary Space: O(1)

Constraints:
1<= |A|,|B| <=104*/


#include <bits/stdc++.h>
using namespace std;

bool isSubSequence(string A, string B) 
{
    int i = 0, j =0;
    int Alen = A.length();
    int Blen = B.length();
    
    while(i < Alen && j < Blen)
    {
        if(A[i] == B[j])
        {
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    if(i == Alen)
    {
        return true;
    }
    return false;
}

int main()
{
    string A, B;
    cout << "Enter String A: ";
    cin >> A;
    cout << "Enter String B: ";
    cin >> B;
    isSubSequence(A, B) ? cout << "true" : cout << "false";
    return 0;
}