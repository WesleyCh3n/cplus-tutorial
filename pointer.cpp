#include <iostream>
#include <iomanip>
using namespace std;

void example01(){
    int a = 10;
    int *ptr = &a;
    cout << "&a: " << &a <<'\n';
    cout << "ptr: " << ptr <<'\n';
    cout << "a: " << a << '\n';
    cout << "*ptr: " << *ptr << '\n';
    a = 16;
    cout << "a: " << a << '\n';
    cout << "*ptr: " << *ptr << '\n';
}

void example02(){
    int arr[3] = {1, 2, 3};
    int *ptr = arr;
    cout << "arr: " << arr << '\n';
    cout << "ptr: " << ptr << '\n';
}

void example03(){
    int a, b, c;
    int *x[3]={&a, &b, &c};
    for(int i=0; i<3; i++)
        cout << x[i] << '\n';
}

void example04(){
    int (*pAry)[4]; // point to array which legth is 4
    int x[3][4];
    pAry = x;
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            pAry[i][j] = i*4 + j;
        }
    }
    cout << "2-D array address with pointer\n";
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            /* cout << *x + i*4 + j << '\n'; */ // use first pointer with length
            if(j == 3){
                cout << "*(pAry+" << i << ")" << "+" << j << endl;
            }
            else{
                cout << "*(pAry+" << i << ")" << "+" << j << " | ";
            }
        }
    }
    cout << left << setw(10) << "pAry"  << ": " << pAry  << " //point to 0th 1-D array" << '\n';
    cout << left << setw(10) << "*pAry" << ": " << *pAry << " //point to 0th element of 0th 1-D array" << '\n';
    cout << left << setw(10) << "pAry+1"  << ": " << pAry+1  << " //point to 1st 1-D array" << '\n';
    cout << left << setw(10) << "*(pAry+1)" << ": " << *(pAry+1) << " //point to 0th element of 1st 1-D array" << '\n';
}

void example05(){
    /* create an int memory space and return the address */
    int *ptr = new int(3); //give value at initial
    cout << *ptr << endl;
    /* create 3 int memory space and return the first address */
    int *ptr2 = new int[3];

    int **ptr3 = new int*;
    *ptr3 = &*ptr;
    cout << **ptr3 << endl;

    delete ptr;
    delete[] ptr2;
}

void example06(){
    int **ptr;
    int row, col;
    cout << "Please tell me row and column:\n";
    cin >> row >> col;

    ptr = new int*[row];
    for(int i=0; i<row; i++)
        ptr[i] = new int[col];

    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++)
            ptr[i][j] = i*col + j;

    for(int i=0; i<row; i++)
        for(int j=0; j<col; j++)
            cout << *(*(ptr+i)+j) << '\n';

    for(int i=0; i<row; i++)
        delete[] ptr[i];

    delete[] ptr;
}

int main(int argc, char * argv[]){
    example06();
}

