#include <string>
#include <sstream>
#include <unordered_map>


using namespace std;




class Solution {
public:
    string reformatDate(string date)
    {
        stringstream ss(date);
        string day, month, year;
        ss >> day >> month >> year;
        unordered_map<string, string> map{
            {"Jan", "01"},
            {"Feb", "02"},
            {"Mar", "03"},
            {"Apr", "04"},
            {"May", "05"},
            {"Jun", "06"},
            {"Jul", "07"},
            {"Aug", "08"},
            {"Sep", "09"},
            {"Oct", "10"},
            {"Nov", "11"},
            {"Dec", "12"}
        };
        day = day.substr(0, day.length() - 2);
        if(day.length() == 1) day = "0" + day;
        return year + "-" + map[month] + "-" + day;
    }
};