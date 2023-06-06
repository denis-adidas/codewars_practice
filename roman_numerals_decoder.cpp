#include "iostream"
#include "map"
#include "string"

using namespace std;


int solution(string roman) {
    int sum = 0;
    map<char, int> alphabet;
    alphabet.emplace('I', 1);
    alphabet.emplace('V', 5);
    alphabet.emplace('X', 10);
    alphabet.emplace('L', 50);
    alphabet.emplace('C', 100);
    alphabet.emplace('D', 500);
    alphabet.emplace('M', 1000);


    sum += alphabet.at(roman[0]);

    for (int i = 1; i < roman.size(); i++) {
        if (alphabet.at(roman[i-1]) < alphabet.at(roman[i])) {
            sum += alphabet.at(roman[i]) - 2 * alphabet.at(roman[i-1]);
        }
        else {
            sum += alphabet.at(roman[i]);
        }

    }

  return sum;
}

int main() {
    string roman = "MMVIII";
    int d = solution(roman);

    cout << d << endl;

    return 0;
}