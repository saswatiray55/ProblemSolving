/*Given three integer arrays nums1, nums2, and nums3, return a distinct array containing all the values that are present in at least two out of the three arrays. You may return the values in any order.
 

Example 1:

Input: nums1 = [1,1,3,2], nums2 = [2,3], nums3 = [3]
Output: [3,2]
Explanation: The values that are present in at least two arrays are:
- 3, in all three arrays.
- 2, in nums1 and nums2.
Example 2:

Input: nums1 = [3,1], nums2 = [2,3], nums3 = [1,2]
Output: [2,3,1]
Explanation: The values that are present in at least two arrays are:
- 2, in nums2 and nums3.
- 3, in nums1 and nums2.
- 1, in nums1 and nums3.
Example 3:

Input: nums1 = [1,2,2], nums2 = [4,3,3], nums3 = [5]
Output: []
Explanation: No value is present in at least two arrays.
 

Constraints:

1 <= nums1.length, nums2.length, nums3.length <= 100
1 <= nums1[i], nums2[j], nums3[k] <= 100*/

#include <bits/stdc++.h>
using namespace std;

vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3)
{
    vector<int>result;
    unordered_map<int, int> mp;
    set<int>s1(nums1.begin(), nums1.end());
    set<int>s2(nums2.begin(), nums2.end());
    set<int>s3(nums3.begin(), nums3.end());
    for(int i : s1)
    {
        mp[i]++;
    }
    for(int i : s2)
    {
        mp[i]++;
    }
    for(int i : s3)
    {
        mp[i]++;
    }
    for(auto i : mp)
    {
        if(i.second >= 2)
        {
            result.push_back(i.first);
        }
    }
    return result;


}
int main()
{
    vector<int> nums1 = {1,1,3,2};
    vector<int> nums2 = {2,3};
    vector<int> nums3 = {3};
    vector <int> result = twoOutOfThree(nums1, nums2,nums3);
    for(int i : result)
    {
        cout << i << " ";
    }
    return 0;
}