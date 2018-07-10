#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int countArrangement(int N) {
        vector<bool> visited(N + 1, false);
        int res = 0;
        dfs(visited, res, N);
        return res;
    }

    void dfs(vector<bool> &visited, int &res, int rest) {
        if (rest == 0) {
            ++res;
            return;
        }

        for (int i = 1; i < visited.size(); ++i) {
            if (visited[i] == false && (i % (visited.size() - rest) == 0 || (visited.size() - rest) % i == 0)) {
                visited[i] = true;
                dfs(visited, res, rest - 1);
                visited[i] = false;
            }
        }
    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}