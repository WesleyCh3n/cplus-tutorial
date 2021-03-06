#include <iostream>
#include <cmath>

void print(int *arr, int len){
    for(int i=0; i<len; i++)
        std::cout << arr[i];
    std::cout << '\n';
}

void perm(int *arr, int i, int len, void (*func)(int *, int)){
    // arr: array
    // i: starting index
    // len: length of array
    // func: function to deal with the result
    if(i == len-1){                 //if starting index is last item
        func(arr, len);
        return;
    }
    for(int j=i; j<len; j++){
        std::swap(arr[i], arr[j]);  //swap item
        perm(arr, i+1, len, func);  //send left array recussively
        std::swap(arr[i], arr[j]);  //restore item
    }
}

int main(){
    int arr[4] = {0, 1, 2, 4};
    perm(arr, 0, 4, print);
}
