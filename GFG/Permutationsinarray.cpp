/*Permutations in array
Given two arrays arr1[], arr2[], and an integer k. The task is to check if after permuting both arrays in such a way, we get the sum of their corresponding element greater than or equal to k i.e. arr1i + arr2i >= k for all i (from 0 to n-1). Return true if possible, else false. 

Examples:

Input: k = 10, arr1[] = [2, 1, 3], arr2[] = [7, 8, 9]. 
Output: true
Explanation: Permutation  arr1[] = [1, 2, 3] and arr2[] = [9, 8, 7] satisfy the condition arr1[i] + arr2[i] >= k
Input: k = 5, arr1[] = [1, 2, 2, 1], arr2[] = [3, 3, 3, 4].
Output: false
Explanation: Since any permutation won't give the answer.
Expected Time Complexity: O(n*log(n))
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ arr.size() ≤ 105
0 ≤ k ≤ 105
0 ≤ arr1i, arr2i ≤ 2*105
*/

#include <bits/stdc++.h>
using namespace std;

bool isPossible(int k, vector<int> &arr1, vector<int> &arr2)
{
    int n = arr1.size();
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end(), greater<int>());

    for(int i = 0; i <n; i++)
    {
        if(arr1[i] + arr2[i] < k)
        {
            return false;
        }
    }
    return true;

}

int main()
{
    int n, n1, n2;
    cout << "Enter the Integer: ";
    cin >> n;
    cout << "Enter the size of 1st array: ";
    cin >> n1;
    cout << "Enter the size of 2nd array: ";
    cin >> n2;
    vector <int> arr1(n1), arr2(n2);

    for(int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    for(int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    isPossible(n, arr1, arr2) ? cout << "True" : cout << "False";

    return 0;

}