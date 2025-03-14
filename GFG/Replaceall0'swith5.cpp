/*Replace all 0's with 5
You are given an integer n. You need to convert all zeroes of n to 5.

Examples:

Input: n = 1004
Output: 1554
Explanation: There are two zeroes in 1004 on replacing all zeroes with 5, the new number will be 1554.
Input: n = 121
Output: 121
Explanation: Since there are no zeroes in 121, the number remains as 121.
Constraints:
0 <= n <= 104
*/

#include <bits/stdc++.h>
using namespace std;

int convertFive(int n) 
{
    int place = 1, result = 0;
    if(n == 0) return 5;  

    while(n > 0) {
        int digit = n % 10;
        if(digit == 0) digit = 5;
        result += digit * place;
        place *= 10;
        n /= 10;
    }
    return result;
    }

int main()
{
    int n;
    cout << "Enter the Number: ";
    cin >> n;

    int result = convertFive(n);
    cout << result << " ";
    
    return 0;
}