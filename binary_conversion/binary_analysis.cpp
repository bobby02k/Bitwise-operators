#include <iostream>
#include <cmath>
using namespace std;

/*
function 'binary' that reads 
binary digits of an integer number n
using bitwise operator AND '&'
*/
void binary(int n){
    unsigned int mask = 0;
    for(int i = 31; i >= 0; i--){
        if((i+1) % 4 == 0)cout << " ";
        mask = pow(2,i); //shift of the i-th bit left->right
        bool bit = mask & n;
        cout << bit;
    }
    cout << endl;
}

int main(){

    int n = 5;
    binary(n);
    binary(-n);

    return 0;
}