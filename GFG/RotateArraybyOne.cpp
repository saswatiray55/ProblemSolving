/*Rotate Array by One
Given an array arr, rotate the array by one position in clockwise direction.

Examples:

Input: arr[] = [1, 2, 3, 4, 5]
Output: [5, 1, 2, 3, 4]
Explanation: If we rotate arr by one position in clockwise 5 come to the front and remaining those are shifted to the end.
Input: arr[] = [9, 8, 7, 6, 4, 2, 1, 3]
Output: [3, 9, 8, 7, 6, 4, 2, 1]
Explanation: After rotating clock-wise 3 comes in first position.
Constraints:
1<=arr.size()<=105
0<=arr[i]<=105
*/

#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &arr) 
{
    int n = arr.size();
    int temp = arr[n-1];
    for(int i  = n-2; i>= 0; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[0] = temp;
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
    rotate(arr);
    for(int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}