#include <iostream>
using namespace std;

int main(int argc, char * argv[]){
    int x[12] = {5,10,15,20,25,30,35,40,45,50,55,60};
    int A,B,C,D,E;
    int *p;
    A = x[2];
    B = x[8];
    C = *x + 25;
    D = *(x + 4);
    p = &x[0];
    p++;
    E = *(p + 3);
    cout << A << '\n';
    cout << B << '\n';
    cout << C << '\n';
    cout << D << '\n';
    cout << E << '\n';
    string a = "ab";
    cout << a[0] + 'A';
    char word[2] = "b";
    cout << HUGE_VAL;
}

