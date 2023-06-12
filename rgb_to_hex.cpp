#include <sstream>
#include <iomanip>
#include "iostream"


class RGBToHex
{
public:
    static std::string rgb(int r, int g, int b);
};


std::string RGBToHex::rgb(int r, int g, int b) {
   std::ostringstream oss;
   oss << std::uppercase << std::setfill('0') << std::hex
   << std::setw(2) << (r < 0 ? 0 : r > 255 ? 255 : r)
   << std::setw(2) << (g < 0 ? 0 : g > 255 ? 255 : g)
   << std::setw(2) << (b < 0 ? 0 : b > 255 ? 255 : b);

   return oss.str();
}

int main() {
    RGBToHex a;
    std::string test = a.rgb(-20,275,125);

    std::cout << test;

//    std::cout << std::to_string(5);

    return 1;
}