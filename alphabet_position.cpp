//
// Created by Denis on 6/6/2023.
//
#include "iostream"
#include "string"

using namespace std;

bool is_low(char a) {
    if (((int)a - 96) > 0 && ((int)a - 96) < 27)
        return true;
    return false;
}

std::string alphabet_position(const string &text) {
    string result;
    for (char c : text) {
        c = tolower(c);
        if (islower(c)) {
            int num = c - 'a' + 1;
            result += to_string(num) + ' ';
        }
    }

    if (!result.empty()) {
        result.pop_back();
    }

    return result;
}

int main() {
    string b = "The narwhal bacons at midnight.";
    string c = alphabet_position(b);
    return 1;
}