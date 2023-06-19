#include <iostream>
#include <vector>
#include <valarray>

using namespace std;

int determinant(std::vector<std::vector<long long>> matrix) {
    int n = matrix.size();

    if(n == 1)
        return matrix[0][0];
    else if(n == 2)
        return matrix[0][0]*matrix[1][1]-matrix[0][1]*matrix[1][0];
    else{
        int det = 0, position;

        for(position = 0; position < n; ++position){
            std::vector<std::vector<long long>> minor;

            for(int i = 1; i < n; ++i){
                std::vector<long long> row;
                for(int j = 0; j < n; ++j){
                    if(j != position)
                        row.push_back(matrix[i][j]);
                }
                minor.push_back(row);
            }

            det += pow(-1.0, position)*matrix[0][position]*determinant(minor);
        }

        return det;
    }
}

int main() {
    vector<vector<int>> a = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> temp;
//    minor(0, 2, a, temp);
//    for (auto x : temp) {
//        for (auto j : x) {
//            cout << j << ' ';
//        }
//        cout << endl;
//    }
    cout << determinant(a) << endl;
    return 1;
}