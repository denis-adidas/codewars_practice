#include <string>
#include <vector>
#include <algorithm>

std::vector<std::string> rotate(const std::string& s) {
    std::vector<std::string> result;

    if (s.empty())
        return result;

    int length = s.length();
    std::string temp = s;
    for (int i = 0; i < length; ++i) {
        std::rotate(temp.begin(), temp.begin()+1, temp.end());
        result.emplace_back(temp);
    }
    return result;
}