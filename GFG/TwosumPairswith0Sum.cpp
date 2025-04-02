/*Two sum -Pairs with 0 Sum
Given an integer array arr, return all the unique pairs [arr[i], arr[j]] such that i != j and arr[i] + arr[j] == 0.

Note: The pairs must be returned in sorted order, the solution array should also be sorted, and the answer must not contain any duplicate pairs.

Examples:

Input: arr = [-1, 0, 1, 2, -1, -4]
Output: [[-1, 1]]
Explanation: arr[0] + arr[2] = (-1)+ 1 = 0.
arr[2] + arr[4] = 1 + (-1) = 0.
The distinct pair are [-1,1].
Input: arr = [6, 1, 8, 0, 4, -9, -1, -10, -6, -5]
Output: [[-6, 6],[-1, 1]]
Explanation: The distinct pairs are [-1, 1] and [-6, 6].
Expected Time Complexity: O(n log n)
Expected Auxiliary Space: O(n).

Constraints:
3 <= arr.size <= 105
-105 <= arr[i] <= 105*/

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> getPairs(vector<int>& arr) {
    // code here
    int n = arr.size();
      vector<vector<int>> result;
  
    sort(arr.begin(), arr.end());
    int left  = 0, right = n - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == 0) {
            // Found a pair
            result.push_back({arr[left], arr[right]});

            // Skip duplicates for left
            while (left < right && arr[left] == arr[left + 1]) {
                left++;
            }
            // Skip duplicates for right
            while (left < right && arr[right] == arr[right - 1]) {
                right--;
            }
            left++;
            right--;
        } else if (sum < 0) {
            left++; 
        } else {
            right--; 
        }
    }
    return result;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<vector<int>> pairs = getPairs(arr);

    cout << "Pairs with sum 0 are:\n";
    for (auto& pair : pairs) {
        cout << pair[0] << " " << pair[1] << "\n";
    }

    return 0;
}
