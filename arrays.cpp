#include <iostream>
using namespace std;

int main(){

    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };


    int sum = 0;

    for (int i =0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += matrix[i][j];
        }
    }

    cout << "sum of matrix: " << sum << endl;
    
    int mean = sum/9;
    cout << "mean of matrix: " << mean << endl;


       cout << "Matrix:" << endl;
    for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
    }


}
