#include <string>
#include <array>




using namespace std;

class Solution {
public:
    int daysBetweenDates(string date1, string date2)
    {
        array<int, 12> m{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        auto isLeap = [](int year)
        {
            return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
        };
        auto daysFromEpoch = [&](const string& date)
        {
            int year = stoi(date.substr(0, 4));
            int month = stoi(date.substr(5, 2));
            int days = stoi(date.substr(8, 2));
            for(int i = 1970; i < year; i++)
            {
                days += 365 + isLeap(i);
            }
            for(int i = 0; i < month - 1; i++)
            {
                days += m[i];
            }
            days += month > 2 && isLeap(year);
            return days;
        };
        return abs(daysFromEpoch(date1) - daysFromEpoch(date2));
    }
};