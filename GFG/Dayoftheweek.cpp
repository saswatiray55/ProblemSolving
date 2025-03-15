/*Day of the week
Write a program that calculates the day of the week for any particular date in the past or future.

Example 1:

Input:
d = 28, m = 12, y = 1995
Output:
Thursday
Explanation:
28 December 1995 was a Thursday.
Example 2:

Input:
d = 30, m = 8, y = 2010
Output:
Monday
Explanation:
30 August 2010 was a Monday.
Your Task:
You don't need to read input or print anything. Your task is to complete the function getDayOfWeek() which takes 3 Integers d, m and y denoting day, month and year as input and return a String denoting the answer.

Expected Time Complexity: O(1)
Expected Auxiliary Space: O(1)

Constraints:
1 <= d <= 31
1 <= m <= 12
1 <= y <= 2100*/

#include <bits/stdc++.h>
using namespace std;

bool leapYear(int year){
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return true;
    return false; 
}
string getDayOfWeek(int d, int m, int y) 
{
    vector<string> allDay = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    vector<int> daysOfMonth = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if(leapYear(y))
    {
        daysOfMonth[1] = 29;
    }
    
    int dateOfYear = 1;
    for(int i = 1; i < y; i++)
    {
        if(leapYear(i))
        {
            dateOfYear += 366;
        }
        else
        {
            dateOfYear += 365;
        }
    }
    for(int i = 0; i < m - 1; i++)
    {
        dateOfYear += daysOfMonth[i];
    }
    dateOfYear += d-1;
    return allDay[dateOfYear % 7];
    
}

int main()
{
    int d, m, y;
    cout << "Enter the Day: ";
    cin >> d;
    cout << "Enter the Month: ";
    cin >> m;
    cout << "Enter the Year: ";
    cin >> y;

    string Date = getDayOfWeek(d, m, y);
    cout << Date << " ";
    
    return 0;
}