class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> num;
        for(auto x : tokens){
            if(x =="+" || x =="-" || x =="*" || x =="/"){
                int num2 = num.top(); num.pop();
                int num1 = num.top(); num.pop();
                if(x =="+")
                num.push(num1+num2);
                else if(x =="-"){
                    num.push(num1-num2);
                }
                else if(x == "*")
                    num.push(num1*num2);
                else if(x =="/"){
                    num.push(num1/num2);
                }
            }
            else
            num.push(stoi(x)); //converts string to int value
        }
        return num.top();
    }
};