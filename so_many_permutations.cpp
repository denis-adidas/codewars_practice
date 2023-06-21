#include <iostream>
#include <vector>
#include <algorithm>

void permute_helper(std::string& in_str, std::vector<std::string>& result, int l, int r) {
    if (l == r && (std::find(result.begin(), result.end(), in_str) == result.end())) {
        
        result.push_back(in_str);
    }
    else {
        for (int i = l; i <= r; i++) {
            std::swap(in_str[l], in_str[i]);
            permute_helper(in_str, result, l + 1, r);
            std::swap(in_str[l], in_str[i]);
        }
    }
}

std::vector<std::string> permutations(std::string& input) {
    std::vector<std::string> result;
    int n = input.size();

    if (n == 0) {
        result.push_back(input);
        return result;
    }

    permute_helper(input, result, 0, n - 1);
    std::sort(result.begin(), result.end());

return result;
}

int main() {
    std::string t_str = "";
    std::vector<std::string> test;

    test = permutations(t_str);

//    std::cout << test[0] << std::endl;
    for (auto x : test)
        std::cout << x << std::endl;


    return 0;
}