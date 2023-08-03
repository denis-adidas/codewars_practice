#include <iostream>
#include <string>
#include <vector>

std::string sum_strings(const std::string& a, const std::string& b) {

    const std::string& longer = (a.length() >= b.length()) ? a : b;
    const std::string& shorter = (a.length() < b.length()) ? a : b;
    
    int carry = 0;
    std::vector<int> temp_sum;
    temp_sum.reserve(longer.length() + 1);
    int i = longer.length() - 1;
    int j = shorter.length() - 1;

    while (i >= 0) {
        int sum = carry;

        if (j >= 0) {
            sum += shorter[j--] - '0';
        }

        sum += longer[i--] - '0';
        carry = sum / 10;
        sum %= 10;

        
        temp_sum.push_back(sum);
    }

    if (carry > 0) {
        temp_sum.push_back(carry);
    }

    std::string result;
    result.reserve(temp_sum.size());
    for (int k = temp_sum.size() - 1; k >= 0; --k) {
        result.push_back(temp_sum[k] + '0');
    }

    return result;
}

