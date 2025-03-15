/*Parenthesis Checker
Given a string s, composed of different combinations of '(' , ')', '{', '}', '[', ']', verify the validity of the arrangement.
An input string is valid if:

         1. Open brackets must be closed by the same type of brackets.
         2. Open brackets must be closed in the correct order.

Examples :

Input: s = "[{()}]"
Output: true
Explanation: All the brackets are well-formed.
Input: s = "[()()]{}"
Output: true
Explanation: All the brackets are well-formed.
Input: s = "([]"
Output: False
Explanation: The expression is not balanced as there is a missing ')' at the end.
Input: s = "([{]})"
Output: False
Explanation: The expression is not balanced as there is a closing ']' before the closing '}'.
Constraints:
1 ≤ s.size() ≤ 106
s[i] ∈ {'{', '}', '(', ')', '[', ']'}
*/

// #include <bits/stdc++.h>
// using namespace std;

// bool isBalanced(string& s) 
// {
//     stack<char> st;
//     for(int i = 0; i< s.length(); i++)
//     {
//         if(s[i] == '(' || s[i] == '{' || s[i] == '[')
//         {
//             st.push(s[i]);
//         }
//         else
//         {
//             if(!st.empty() && 
//                 ((st.top() == '(' && s[i] == ')') ||
//                  (st.top() == '{' && s[i] == '}') ||
//                  (st.top() == '[' && s[i] == ']')))
//             {
//                 st.pop();
//             }
//             else
//             {
//                 return false;
//             }
//         }
//     }
//     return st.empty();
// }

// int main()
// {
//     string s;
//     cin >> s;
//     isBalanced(s) ? cout << "True" : cout << "False";
//     return 0;

// }

#include <bits/stdc++.h>
using namespace std;

int isBalanced(string& s) 
{
    stack<char> st;
    int count = 0;
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '(')
        {
            st.push(s[i]);
        }
        else if(s[i] == ')') 
        {
            if(!st.empty() && st.top() == '(')
            {
                st.pop();
                count++;
            }
            else 
            {
                return 0;  
            }
        }
    }
    
    return st.empty() ? count : 0; 
}

int main()
{
    string s;
    cin >> s;
    int result = isBalanced(s);
    cout << result;
    return 0;
}
