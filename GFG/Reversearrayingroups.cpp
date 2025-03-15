/*Reverse array in groups
Given an array arr of positive integers. Reverse every sub-array group of size k.

Note: If at any instance, k is greater or equal to the array size, then reverse the entire array. You shouldn't return any array, modify the given array in place.

Examples:

Input: arr[] = [1, 2, 3, 4, 5], k = 3
Output: [3, 2, 1, 5, 4]
Explanation: First group consists of elements 1, 2, 3. Second group consists of 4,5.
Input: arr[] = [5, 6, 8, 9], k = 5
Output: [9, 8, 6, 5]
Explnation: Since k is greater than array size, the entire array is reversed.
Constraints:
1 ≤ arr.size(), k ≤ 107
1 ≤ arr[i] ≤ 1018*/


#include <bits/stdc++.h>
using namespace std;

void reverseInGroups(vector<int> &arr, int k) {
    reverse(arr.begin(), arr.begin()+k);
    reverse(arr.begin()+k, arr.end());
}

int main()
{
    int n;
    cout << "Enter size of n: ";
    cin >> n;
    vector<int>arr(n);
    for(int i = 0; i<n; i++)
    {
        cin >>arr[i];
    }
    int d;
    cin >> d;

    reverseInGroups(arr, d);
    for(int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}