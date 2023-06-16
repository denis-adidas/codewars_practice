#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    if (number <= 3) {
        return true;
    }

    if (number % 2 == 0 || number % 3 == 0) {
        return false;
    }

    for (int i = 5; i * i <= number; i += 6) {
        if (number % i == 0 || number % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}

vector<int> primeFactors(int n) {
    vector<int> result;

    if (n <= 1) {
        return result;
    }

    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0 && isPrime(i)) {
            while (n % i == 0) {
                result.push_back(i);
                n /= i;
            }
        }
    }

    if (n > 1) {
        result.push_back(n);
    }

    return result;
}

int main() {
    vector<int> factors = primeFactors(4);
    for (int factor : factors) {
        cout << factor << endl;
    }

    return 0;
}