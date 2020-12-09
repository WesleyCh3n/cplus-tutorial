#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

#define INM 3
#define INL 4
#define INN 5

double answer1 = 0;

double** matrixMultiplication (double** A, double** B, int M, int L, int N);
void printMatrix(double** Matrix, int row, int col);

int main(){
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

    double **pA = new double*[INM];
    for(int i=0; i<INM; i++)
        pA[i] = A[i];

    double **pB = new double*[INL];
    for(int i=0; i<INL; i++)
        pB[i] = B[i];

    double **C = matrixMultiplication(pA, pB, INM, INL, INN);

    printMatrix(C, INM, INN);
    printf("Sum of matrix element is %.10f\n", answer1);
    /* printf("%.10f\n", answer1-1045.889); */
    /* printf(abs(answer1-1045.889) < 0.01 ? "true": "false"); */

    delete [] pA;
    delete [] pB;
}

void printMatrix(double** Matrix, int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            /* cout << setw(6) << Matrix[i][j] << " "; */
            cout << setw(6) << *(*(Matrix+i)+j) << " ";
        }
        cout << '\n';
    }
}

double** matrixMultiplication (double** A, double** B, int M, int L, int N){
    double **pC = new double*[M];
    for(int i=0; i<M; i++)
        pC[i] = new double[N];

    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            double sum = 0;
            for(int k=0; k<L; k++)
                sum += A[i][k] * B[k][j];
            pC[i][j] = sum;
            answer1 += sum;
        }
    }

    return pC;
}
