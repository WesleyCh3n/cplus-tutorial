#include <iostream>
using namespace std;

void foo01(int a);
void foo02(int &a);

int main(){
    int x = 12;
    foo01(x);
    cout << "x now is " << x << '\n';
    foo02(x);
    cout << "x now is " << x << '\n';
    static int a[10] = {1,2};
    for(int i=0; i<10; i++)
        a[i] = 1;
    for(int i=0; i<10; i++)
        cout << a[i];
    return 0;
}

void foo01(int a){
    a += 1;
}

void foo02(int &a){
    a += 1;
}
