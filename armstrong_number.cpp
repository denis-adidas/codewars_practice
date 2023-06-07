//
// Created by Denis on 6/7/2023.
//
#include "iostream"
#include "string"
#include "math.h"

using namespace std;

bool narcissistic(const int &value) {
    string scr_num = to_string(value); //convert int to string
    int result = 0;
    int digits = scr_num.length(); //define count of digit in the num
    for (char c : scr_num) {
        result += pow((int)c - 48, digits); //sum digits in the result
    }

    return result == value;
}

int main() {
    int d = 153;
    cout << narcissistic(d) << endl;
    return 1;
}