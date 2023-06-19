#include "algorithm"
#include "string"
#include "iostream"

bool scramble(const std::string& s1, const std::string& s2){
    std::string s1_sorted = s1;
    std::sort(s1_sorted.begin(), s1_sorted.end());
    std::string s2_sorted = s2;
    std::sort(s2_sorted.begin(), s2_sorted.end());

    size_t i = 0;
    for (auto c : s2_sorted) {
        size_t pos = s1_sorted.find(c, i);
        if (pos == std::string::npos)
            return false;
        i = pos + 1;
    }
    return true;
}

int main() {
    std::cout << scramble("scriptingjava", "javascript") << std::endl;
    return 1;
}