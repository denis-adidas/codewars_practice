#include <set>
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

class Rectangle {
public:
    vector<int> rectIntoSquares(const int length, const int width);
};

vector<int> Rectangle::rectIntoSquares(const int length, const int width) {
    vector<int> squares;
    int count = 0;
    int temp_lenght = length;
    int temp_width = width;


   while (temp_width != temp_lenght) {
       if (temp_lenght > temp_width) {
           temp_lenght -= temp_width;
           count++;
           squares.push_back(temp_width);
       }
       else {
           temp_width -= temp_lenght;
           count++;
           squares.push_back(temp_lenght);
       }
   }
   squares.push_back(temp_lenght);
    reverse(squares.begin(), squares.end());

   return squares;
}

int main() {

    Rectangle a;
    vector<int> b;
    b = a.rectIntoSquares(13, 5);

    return 1;
}