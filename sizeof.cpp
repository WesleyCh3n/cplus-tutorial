#include <iostream>
#include <string>
using namespace std;

#define max(x,y) (x)>(y)?(x):(y);
#define min(x,y) (x)<(y)?(x):(y);

int main(){
    string str = "hello";
    cout << sizeof(str) << endl;
    cout << str.size() << endl;

    int a = max(1,2);
    int b = min(1,2);
    cout << a << endl;
    cout << b << endl;
}
