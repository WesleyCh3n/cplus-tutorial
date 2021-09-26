#include <iostream>
using namespace std;

/* template < 樣板參數型態 樣板參數名 [, 其他樣板參數] > */
/* 原型回傳型態 函數名(參數型態 原型參數名, ...) { */
/*     //prototype codes; */
/* } */

template <class T>
auto mySwap(T &a, T &b) -> void{
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main(int argc, char * argv[]){
    int a=1;
    int b=2;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    mySwap(a, b);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
}

