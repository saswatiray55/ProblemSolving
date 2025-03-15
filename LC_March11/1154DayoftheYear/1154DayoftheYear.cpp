/*1154. Day of the Year
Given a string date representing a Gregorian calendar date formatted as YYYY-MM-DD, return the day number of the year.

Example 1:

Input: date = "2019-01-09"
Output: 9
Explanation: Given date is the 9th day of the year in 2019.
Example 2:

Input: date = "2019-02-10"
Output: 41
 
Constraints:

date.length == 10
date[4] == date[7] == '-', and all other date[i]'s are digits
date represents a calendar date between Jan 1st, 1900 and Dec 31st, 2019.
*/

#include <bits/stdc++.h>
using namespace std;

int dayOfYear(string date) {
    int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    int year = stoi(date.substr(0,4));
    int month = stoi(date.substr(5,2));
    int day = stoi(date.substr(8));

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        days[1] = 29;
    }
    for (int i = 0; i < month - 1; i++) {
        day += days[i];
    }
    return day;
}

int main()
{
    string s;
    cout << "Enter the Date: ";
    cin >> s;
    int result = dayOfYear(s);
    cout << result << " ";
    return 0;
}