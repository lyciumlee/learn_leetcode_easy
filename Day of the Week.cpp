#include <string>
#include <vector>

using namespace std;

inline bool leapYear(int year)
{
    return (year % 4 == 0 && (year % 100 != 0)) || (year % 400 == 0);
}

class Solution {
public:
    string dayOfTheWeek(int day, int month, int year)
    {
        vector<int> days = {31, 28 + leapYear(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int sum = 0;
        for(int i = 1970; i < year;i++)
        {
            sum += 365 + leapYear(i);
        }
        for(int i = 1; i < month; i++)
        {
            sum += days[i - 1];
        }
        sum += day;
        return names[(sum + 3) % 7];
    }
private:
    vector<string> names = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
};