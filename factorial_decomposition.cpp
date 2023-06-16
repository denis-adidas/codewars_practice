#include <string>

using namespace std;

int countInNum(int fact, int num) {
    int result = 0;
    while(fact > 0) {
        fact /= num;
        result += fact;
    }
    return result;
}
bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

string decomp(int n) {
    string result;
    int degree;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            degree = countInNum(n, i);
            if (degree > 1)
                result += to_string(i) + '^' + to_string(degree) + " * ";
            else
                result += to_string(i) + " * ";
        }
    }
    result.pop_back();
    result.pop_back();
    result.pop_back();
    return result;
}
