/*500. Keyboard Row
Given an array of strings words, return the words that can be typed using letters of the alphabet on only one row of American keyboard like the image below.

Note that the strings are case-insensitive, both lowercased and uppercased of the same letter are treated as if they are at the same row.

In the American keyboard:

the first row consists of the characters "qwertyuiop",
the second row consists of the characters "asdfghjkl", and
the third row consists of the characters "zxcvbnm".

Example 1:

Input: words = ["Hello","Alaska","Dad","Peace"]
Output: ["Alaska","Dad"]

Explanation:
Both "a" and "A" are in the 2nd row of the American keyboard due to case insensitivity.

Example 2:

Input: words = ["omk"]
Output: []

Example 3:

Input: words = ["adsdf","sfd"]

Output: ["adsdf","sfd"]

Constraints:
1 <= words.length <= 20
1 <= words[i].length <= 100
words[i] consists of English letters (both lowercase and uppercase). */

#include <bits/stdc++.h>
using namespace std;

vector<string> findWords(vector<string>& words) 
{
    vector<string> ans;
    vector<string> rows = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};
    for(auto word : words)
    {
        string find = "";
        char firstchar = tolower(word[0]);
        for(string row : rows)
        {
            if(row.find(firstchar) != -1)
            {
                find = row;
                break;
            }
        }
        bool y = true;
        for(char ch : word)
        {
            if(find.find(tolower(ch)) == -1)
            {
                y = false;
            }
        }
        if(y)
        {
            ans.push_back(word);
        }
    }
    return ans;
    
}

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;
    vector<string>words(n);
    for(int i = 0; i<n; i++)
    {
        cin >> words[i];
    }
    vector<string> ans = findWords(words);
    for(auto i : ans)
    {
        cout << i << " ";
    }
    
    return 0;
}