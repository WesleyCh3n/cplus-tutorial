#include <iostream>

/* Usage                                          */
/* When you want to pass a function to a function */

/* More human readibility */
typedef int (*calculation)(int, int);
typedef void (*state)();


/* Oringal code */
int operation_old(int a, int b, int (*calc)(int, int)){
    return calc(a, b);
}

/* With typedef */
int operation(int a, int b, calculation calc){
    return calc(a, b);
}

/* function to pass */
int add(int a, int b){
    return a+b;
}

int minus(int a, int b){
    return a-b;
}

void run(){
    std::cout << "Running!\n";
}

void stop(){
    std::cout << "Stop!\n";
}

void start(){
    std::cout << "Start!\n";
}

int main(int argc, char * argv[]){
    std::cout << operation(2, 3, add) << '\n';
    std::cout << operation(2, 3, minus) << '\n';

    /* pointer to function array */
    state op[3] = {start, stop, run};
    int S;
    std::cout << "Which state?\n";
    std::cin >> S;
    switch(S){
        case 1:
            op[0]();
            break;
        case 2:
            op[1]();
            break;
        case 3:
            op[2]();
            break;
    }
}

