/*2114. Maximum Number of Words Found in Sentences
A sentence is a list of words that are separated by a single space with no leading or trailing spaces.

You are given an array of strings sentences, where each sentences[i] represents a single sentence.

Return the maximum number of words that appear in a single sentence.

Example 1:

Input: sentences = ["alice and bob love leetcode", "i think so too", "this is great thanks very much"]
Output: 6
Explanation: 
- The first sentence, "alice and bob love leetcode", has 5 words in total.
- The second sentence, "i think so too", has 4 words in total.
- The third sentence, "this is great thanks very much", has 6 words in total.
Thus, the maximum number of words in a single sentence comes from the third sentence, which has 6 words.
Example 2:

Input: sentences = ["please wait", "continue to fight", "continue to win"]
Output: 3
Explanation: It is possible that multiple sentences contain the same number of words. 
In this example, the second and third sentences (underlined) have the same number of words.
 

Constraints:
1 <= sentences.length <= 100
1 <= sentences[i].length <= 100
sentences[i] consists only of lowercase English letters and ' ' only.
sentences[i] does not have leading or trailing spaces.
All the words in sentences[i] are separated by a single space.
*/

#include <bits/stdc++.h>
using namespace std;

int mostWordsFound(vector<string>& sentences) {
    int maxWord = 0;
    for(int i = 0; i < sentences.size(); i++)
    {
        int count = 1;
        for(int j = 0; j < sentences[i].length(); j++)
        {
            if(sentences[i][j] == ' ')
            {
                count++;
            }
        }
        maxWord = max(maxWord, count);
    }
    return maxWord;
    
}

int main()
{
    int n;
    cout << "Enter the Size of String: ";
    cin >> n;
    cin.ignore();
    vector<string> sentences(n);
    for (int i = 0; i < n; i++) {
        getline(cin, sentences[i]);  
    }
    int ans = mostWordsFound(sentences);
    cout << ans << " ";
    return 0;
}