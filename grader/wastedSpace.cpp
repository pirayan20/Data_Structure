#include <iostream>
using namespace std;

int main(){
    int n,i=0;
    cin >> n;

    int current = 1;
    while(true){
        if (current >= n){
            cout << current - n << "\n";
            break;
        }
        current *= 2;
    }
}