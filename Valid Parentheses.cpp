class Solution {
public:
    bool isValid(string s) {
        stack<string> my_s;
        for(int64_t i = 0; i< s.size();i++)
        {
            switch (s[i]) {
                case '(': {
                    my_s.push("(");
                    continue;
                    break;
                }
                case '{':{
                    my_s.push("{");
                    continue;
                    break;
                }
                case '[': {
                    my_s.push("[");
                    continue;
                    break;
                }
            }
            if(my_s.empty())
            {
                return false;
            }
            switch (s[i]) {
                case ')': {
                    if(my_s.top() != "(")
                    {
                        return false;
                    } else{
                        my_s.pop();
                    }
                    break;
                }
                case '}':{
                    if(my_s.top() != "{")
                    {
                        return false;
                    } else{
                        my_s.pop();
                    }
                    break;
                }
                case ']': {
                    if(my_s.top() != "[")
                    {
                        return false;
                    } else{
                        my_s.pop();
                    }
                    break;
                }
            }
        }
        if(my_s.empty())
        {
            return true;
        }else{
            return false;
        }
        return true;
    }
};