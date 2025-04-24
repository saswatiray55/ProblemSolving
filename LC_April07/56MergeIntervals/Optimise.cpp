#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals) {
    int n = intervals.size();
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;

    for(int i = 0; i< n; i++)
    {
        if(ans.empty() || intervals[i][0] > ans.back()[1])
        {
            ans.push_back(intervals[i]);
        }
        else
        {
            ans.back()[1] = max(ans.back()[1], intervals[i][1]);
        }
    }
    return ans;    
}

int main()
{
    int n;
    cout << "Enter the number of intervals: ";
    cin >> n;

    vector<vector<int>> intervals(n, vector<int>(2));

    cout << "Enter intervals (start and end):\n";
    for(int i = 0; i < n; i++) {
        cin >> intervals[i][0] >> intervals[i][1];
    }

    vector<vector<int>> merged = merge(intervals);

    cout << "Merged Intervals:\n";
    for(auto it : merged) {
        cout << "[" << it[0] << ", " << it[1] << "]\n";
    }

    return 0;
}