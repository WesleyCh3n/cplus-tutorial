#include <iostream>
#include <iomanip>
using namespace std;

void matrixMultiplication (double A[3][4], double B[4][5]);
void printMatrix(double Matrix[3][5]);

int main(int argc, char * argv[]){
    double A[3][4] = {
        {2.1, 3.1, 6.7, 7.1},
        {5.0, 3.0, 4.2, 2.2},
        {3.3, 4.4, 5.5, 0.5}
    };

    double B[4][5] = {
        {1.0, 1.1, 7.7, 2.1, 4.4},
        {2.2, 2.3, 2.3, 8.6, 3.3},
        {7.5, 8.1, 2.4, 9.2, 0.7},
        {9.1, 2.3, 9.9, 0.5, 0.9}
    };
    matrixMultiplication(A, B);
}

void printMatrix(double Matrix[3][5]){
    for(int i=0; i<3; i++){
        for(int j=0; j<5; j++){
            /* cout << setw(6) << Matrix[i][j] << " "; */
            cout << setw(6) << *(*(Matrix+i)+j) << " ";
        }
        cout << '\n';
    }
}

void matrixMultiplication (double A[3][4], double B[4][5]){
    double C[3][5];
    for(int i=0; i<3; i++){
        for(int j=0; j<5; j++){
            double sum = 0;
            for(int k=0; k<4; k++)
                sum += A[i][k] * B[k][j];
            C[i][j] = sum;
        }
    }
    printMatrix(C);
}

