class Solution {
public:
    bool isValid(string s) {
     
        std::stack<char> temp;

        for(char c : s) {

            if(c == '(' || c == '{' || c == '[')
                temp.push(c);
            else if(temp.empty())
                return false;
            else{
                char top = temp.top();
                if(top == '(' && c == ')' || top == '{' && c == '}' || top == '[' && c == ']')
                    temp.pop();
                else
                    return false;
            }
        }

        if(temp.empty())
            return true;
        else
            return false;
    }
};