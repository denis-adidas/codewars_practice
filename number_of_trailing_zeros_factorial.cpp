#include "iostream"

long zeros(long n) {
    int result = 0;
    while(n > 0) {
        n /= 5;
        result += n;
    }

    return result;
}

int main() {

    std::cout << zeros(1000) << std::endl;

    return 1;
}