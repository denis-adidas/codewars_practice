#include <iostream>
#include <vector>
#include <cstring>

void TrimRight(char *s) {
    if (s == nullptr)
        return;

    size_t length = strlen(s);
    if (length == 0)
        return;

    char *LastNonSpace = s + length - 1;
    while (LastNonSpace >= s && *LastNonSpace == ' ')
        --LastNonSpace;
    *(LastNonSpace + 1) = '\0';
}

bool valid_braces(std::string braces) {
    std::vector<char> queue;
    char last = ' ';
    for (char c : braces) {
        if (c == '(' || c == '{' || c == '[')
            queue.push_back(c);
        else {
            last = queue.back();
            queue.pop_back();
            if (last == '(' && c == ')') {
                continue;
            } else if (last == '{' && c == '}')
                continue;
            else if (last == '[' && c == ']')
                continue;
            else
                return false;
        }

        }
    return queue.size() == 0;
}

int main() {
    std::string a = "(){}[]";
    std::cout << valid_braces(a);
    return 0;
}