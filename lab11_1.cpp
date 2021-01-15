#include<iostream>
using namespace std;

int fibonacci(int);

int main(){
    cout << fibonacci(50);
    return 0; 
}

int fibonacci(int x){
    if(x == 0) return 0;
    else if(x == 1) return 1;
    else if(x>1){
        return fibonacci(x-1) + fibonacci(x-2);
    }
    return 0;
}
