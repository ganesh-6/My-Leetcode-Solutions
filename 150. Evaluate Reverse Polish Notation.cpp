class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        int ans=0;
        for (int i=0; i<tokens.size(); i++){
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "/" || tokens[i] == "*") {
                long a = s.top(); s.pop();
                long b = s.top(); s.pop();
                if (tokens[i] == "+") a = b + a;
                if (tokens[i] == "-") a = b - a;
                if (tokens[i] == "/") a = b / a;
                if (tokens[i] == "*") a = b * a;
                s.push(a);
            }
            else {
                s.push(stoi(tokens[i]));
            }
        }
        return s.top();
    }
};