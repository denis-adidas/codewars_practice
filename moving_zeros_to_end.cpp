#include "iostream"
#include <vector>

std::vector<int> move_zeroes(const std::vector<int>& input) {
    std::vector<int> temp = input;
    auto it = temp.begin();
    int count = 0;
    while (it != temp.end()) {
        if (*it == 0) {
            temp.erase(it);
            count++;
        }
        else {
            ++it;
        }
    }
    for (count; count > 0; count--)
        temp.push_back(0);

    return temp;
}
int main() {
    std::vector<int> a = {1, 2, 0, 1, 0, 1, 0, 3, 0, 1};
    a = move_zeroes(a);

    for (auto it : a) {
        std::cout << it << ' ';
    }
    return 1;
}