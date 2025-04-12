/*118. Pascal's Triangle
Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

     1
    1 1
   1 2 1
  1 3 3 1
 1 4 6 4 1    
 
Example 1:

Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
Example 2:

Input: numRows = 1
Output: [[1]]
 

Constraints:

1 <= numRows <= 30*/

#include <bits/stdc++.h>
using namespace std;

vector<int> generateRow(int row)
{
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1);
    for(int col = 1; col<row; col++)
    {
        ans = ans * (row - col);
        ans = ans / (col);
        ansRow.push_back(ans);
    }
    return ansRow;
}
vector<vector<int>> generate(int numRows) {

    vector<vector<int>> ans;
    for(int i = 1; i<= numRows; i++)
    {
        ans.push_back(generateRow(i));
    } 
    return ans;
}

int main()
{
    int numRows;
    cout << "Enter the numRows: ";
    cin >> numRows;
    vector<vector<int>> triangle =  generate(numRows);
    for(int i = 0; i< triangle.size(); i++)
    {
        cout << "[" ;
        for(int j= 0; j < triangle[i].size(); j++)
        {
            cout << triangle[i][j];
            if (j != triangle[i].size() - 1)
                cout << ", ";
        }
        cout << "]";
    }
    return 0;
}