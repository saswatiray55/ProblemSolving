/*Sieve of Eratosthenes
Given a positive integer n, calculate and return all prime numbers less than or equal to n using the Sieve of Eratosthenes algorithm.


A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself.

Examples:

Input: n = 10
Output: 2 3 5 7
Explanation: Prime numbers less than equal to 10 are 2 3 5 and 7.
Input: n = 35
Output: 2 3 5 7 11 13 17 19 23 29 31
Explanation: Prime numbers less than equal to 35 are 2 3 5 7 11 13 17 19 23 29 and 31.
Constraints:
1<= n <= 104
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> sieveOfEratosthenes(int n) 
{
        vector<bool> isPrime(n+1, true);
        
        for(int i = 2; i *i <= n; i++)
        {
            if(isPrime[i])
            {
                for(int j = i * i; j <= n; j += i)
                {
                    isPrime[j] = false;
                }
            }
        }
        vector<int> ans;
        for(int i = 2; i <= n; i++)
        {
            if(isPrime[i])
            {
                ans.push_back(i);
            }
        }
        return ans;
    }

int main()
{
    int n;
    cout << "Enter the Number: ";
    cin >> n;
    vector<int> result = sieveOfEratosthenes(n);
    for(int i : result)
    {
        cout << i << " ";
    }
    return 0;
}