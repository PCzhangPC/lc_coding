#include <iostream>
#include <vector>
using namespace std;

class MinStack {
public:
    MinStack() {
        sta.clear();
        min_val_sta.clear();
    }

    void push(int x) {
        sta.push_back(x);

        if (min_val_sta.empty()) {
            min_val_sta.push_back(x);
        } else {
            int t = getMin();
            if (x < t)
                min_val_sta.push_back(x);
            else
                min_val_sta.push_back(t);
        }

    }

    void pop() {
        sta.pop_back();
        min_val_sta.pop_back();
    }

    int top() {
        return *(sta.end() - 1);
    }

    int getMin() {
        return *(min_val_sta.end() - 1);
    }

private:
    vector<int> sta;
    vector<int> min_val_sta;
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}