#include <bits/stdc++.h>


using namespace std;


class Solution {
public:
    string interpret(string command)
    {
        string res = command;
        size_t pos = command.find("()");
        while(pos != string::npos)
        {
            command.replace(pos, 2, "o");
            pos = command.find("()");
        }

        pos = command.find("(al)");
        while(pos != string::npos)
        {
            command.replace(pos, 4, "al");
            pos = command.find("(al)");
        }
        
        // () -> o
        // (al) -> al
        
        return command;
    }
};


