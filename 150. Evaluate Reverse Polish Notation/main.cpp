#include <iostream>
#include <vector>
#include <map>

using namespace std;

double sum(double a, double b) {
    return a + b;
}

double div(double a, double b) {
    return a - b;
}

double plu(double a, double b) {
    return a * b;
}

double mins(double a, double b) {
    return a / b;
}

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> num_stack;
        double (*s)(double, double) = sum;
        double (*d)(double, double) = div;
        double (*p)(double, double) = plu;
        double (*m)(double, double) = mins;

        map<string, double(*)(double, double)> op_dict = {};
        op_dict["+"] = s;
        op_dict["-"] = d;
        op_dict["*"] = p;
        op_dict["/"] = m;

        for (vector<string>::iterator it = tokens.begin(); it != tokens.end(); it++) {
            if (op_dict.count(*it) != 0) {
                double (*op)(double, double) = op_dict[*it];
                double para1 = *(num_stack.end() - 2);
                double para2 = *(num_stack.end() - 1);

                num_stack.pop_back();
                num_stack.pop_back();
                num_stack.push_back(op(para1, para2));
            } else {
                num_stack.push_back((int)(double)atoi((*it).c_str()));
            }
        }

        return num_stack[0];
    }
};

int main() {
    vector<string> vec = {"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
    Solution s;
    cout << s.evalRPN(vec);
    return 0;
}