#include <iostream>
using namespace std;

class Demo{
    public:
        // if class member have reference type, need to initialize first
        // after constructor input args, with semicolon class_mem(input args)
        Demo(int &out, int &out2, int out3):num(out), num2(out2), num3(out3){
        }
        auto display(){
            cout << "num: " << num << '\n';
            cout << "&num: " << &num << '\n';
            cout << "num2: " << num2 << '\n';
            cout << "&num2: " << &num2 << '\n';
            cout << "num3: " << num3 << '\n';
            cout << "&num3: " << &num3 << '\n';
        }
    private:
        int &num;
        int &num2;
        int num3;
};

int main(int argc, char * argv[]){
    int a = 1, b = 2, c = 3;
    cout << "&a: " << &a << '\n';
    cout << "&b: " << &b << '\n';
    cout << "&c: " << &c << '\n';
    Demo obj(a,b,c);
    obj.display();
}
