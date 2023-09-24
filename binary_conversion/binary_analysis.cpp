#include <iostream>
using namespace std;

/*
function 'binary' that reads 
binary digits of an integer number n
using bitwise operator AND '&'
*/
void binary(int n, int bits = 32){
    unsigned int mask = 1 << bits-1;
    for(int i = bits-1; i >= 0; i--){
        if((i+1) % 4 == 0)cout << " ";
        bool bit = mask & n;
        cout << bit;
        mask = mask >> 1;//shift of the i-th bit left->right
    }
    cout << endl;
}

int main(){

    int n = 64;
    binary(n);
    binary((n>>1));

    return 0;
}