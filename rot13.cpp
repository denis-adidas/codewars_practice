#include <string>
#include "iostream"

using namespace std;

string rot13(string msg) {
    for (int i = 0; i < msg.length(); i++) {
        if (isalpha(msg[i]) && isupper(msg[i])) {
            int temp = msg[i];
            temp += 13;
            if (temp > 90)
                temp = (temp - 26);
            msg[i] = temp;
        }
        else if (isalpha(msg[i]) && islower(msg[i])) {
            int temp = msg[i];
            temp += 13;
            if (temp > 122)
                temp = (temp - 26);
            msg[i] = temp;
        }
    }

    return msg;
}

int main() {

    string str = "test?";
    str = rot13(str);
    cout << str << endl;
    return 1;
}