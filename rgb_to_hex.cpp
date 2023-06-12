#include <sstream>
#include "iostream"


class RGBToHex
{
public:
    static std::string rgb(int r, int g, int b);
    static int roundTo(int a);
    static std::string toUp(const std::string &input);
};

int RGBToHex::roundTo(int a) {
    if (a < 0)
        return 0;
    if (a > 255)
        return 255;
    return a;
}
std::string RGBToHex::toUp(const std::string &input) {
    std::string result;
    for (char c : input) {
        result += std::toupper(c);
    }
    return result;
}
std::string RGBToHex::rgb(int r, int g, int b) {
    r = roundTo(r);
    g = roundTo(g);
    b = roundTo(b);
    std::stringstream stream;
    if (r >= 0 && r < 10)
        stream << std::to_string(0) << std::to_string(r);
    else {
        stream << std::hex << r;
    }
    if (g >= 0 && g < 10)
        stream << std::to_string(0) << std::to_string(g);
    else {
        stream << std::hex << g;
    }
    if (b >= 0 && b < 10)
        stream << std::to_string(0) << std::to_string(b);
    else {
        stream << std::hex << b;
    }

    std::string result = (stream.str());
    result = toUp(result);
    return result;
}

int main() {
    RGBToHex a;
    std::string test = a.rgb(-20,275,125);

    std::cout << test;

//    std::cout << std::to_string(5);

    return 1;
}