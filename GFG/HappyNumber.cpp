/*Happy Number
Given a number N find whether its a happy number or not. 
A number is called happy if it leads to 1 after a sequence of steps wherein each step, the number is replaced by the sum of squares of its digit that is if we start with Happy Number and keep replacing it with digits square sum, we reach 1.

Example 1:

Input: 
N = 19
Output: 
1
Explanation:
19 is a Happy Number,
1^2 + 9^2 = 82
8^2 + 2^2 = 68
6^2 + 8^2 = 100
1^2 + 0^2 + 0^2 = 1
As we reached to 1, 
19 is a Happy Number.
Example 2:

Input:
N = 20
Output: 
0
Explanation: 
We can never reach to 1
by repeating the mentioned
steps.

Your Task:
You don't need to read input or print anything. Your task is to complete the function isHappy() which takes an integer N as input parameter and returns 1 if N is a happy number or 0 otherwise.

Expected Time Complexity: O(sqrt(N))
Expected Space Complexity: O(1)
 
Constraints:
1 <= N <= 104*/

#include <bits/stdc++.h>
using namespace std;

int isHappy(int N)
{
    int sum = N, x = N;
    
    while (sum > 9) {
        sum = 0;
        
        while (x > 0) {
            int d = x % 10;
            sum += d * d;
            x /= 10;
        }
        x = sum;
    }
    if (sum == 7 || sum == 1)
        return true;
    return false;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int result = isHappy(n);
    result == 1 ? cout << 1 : cout << 0;
    

    return 0;
}