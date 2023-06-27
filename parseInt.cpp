#include <iostream>
#include <unordered_map>
#include <vector>
#include <sstream>

std::unordered_map<std::string, int> dic = {
        {"zero", 0},      {"one", 1},        {"two", 2},        {"three", 3},     {"four", 4},
        {"five", 5},      {"six", 6},        {"seven", 7},      {"eight", 8},     {"nine", 9},
        {"ten", 10},      {"eleven", 11},    {"twelve", 12},    {"thirteen", 13}, {"fourteen", 14},
        {"fifteen", 15},  {"sixteen", 16},   {"seventeen", 17}, {"eighteen", 18}, {"nineteen", 19},
        {"twenty", 20},   {"thirty", 30},    {"forty", 40},     {"fifty", 50},    {"sixty", 60},
        {"seventy", 70},  {"eighty", 80},    {"ninety", 90}
};

int parse_int(const std::string& string) {
    if (string.empty()) {
        return 0;
    }

    std::vector<std::string> words;

    std::stringstream ss(string);
    std::string word;
    std::vector<std::string> split_words;

    while (ss >> word) {
        if (word != "and") {
            words.push_back(word);
        }
    }


    int result = 0;
    int current_number = 0;
    int last_number = 0;

    for (const std::string& word : words) {
        if (word == "million") {
            result += current_number * 1000000;
            current_number = 0;
        } else if (word == "thousand") {
            result += current_number * 1000;
            current_number = 0;
        } else if (word == "hundred") {
            current_number *= 100;
        } else if (dic.find(word) != dic.end()) {
            current_number += dic[word];
        } else {
            std::stringstream ss(word);
            std::string subword;
            int subnumber = 0;

            while (std::getline(ss, subword, '-')) {
                subnumber += dic[subword];
            }


            current_number += subnumber;
        }
    }

    result += current_number;
    return result;
}

int main() {
    long d = parse_int("two hundred and forty-six");

    std::cout << d << std::endl;

    return 0;
}