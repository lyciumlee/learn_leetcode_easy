#include <string>


using namespace std;


class Solution {
public:
    string defangIPaddr(string address)
    {
        string res= "";
        int addrLenth = address.size();
        for(int i=0; i<addrLenth; i++)
        {
            if(address[i] == '.')
            {
                res += "[.]";
            }else{
                res += address[i];
            }
        }
        return res;
    }
};