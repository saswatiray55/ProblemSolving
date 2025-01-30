#include <bits/stdc++.h>
using namespace std;

int maxWater(vector<int> &arr) 
{
    stack<int> st;
    int res = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        while(!st.empty() && arr[st.top()] < arr[i])
        {
            int pop_height = arr[st.top()];
            st.pop();
            
            if(st.empty())
                break;
            
            int distance = i - st.top() - 1;
            
            int water = min(arr[st.top()], arr[i]) - pop_height;
            res += distance * water;
        }
        st.push(i);
    }
    return res;
}

int main()
{
    int n;
    cout << "Enter the Height: ";
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i< n; i++)
    {
        cin >> arr[i];
    }
    int result = maxWater(arr);
    cout << result << endl;
    return 0;
}