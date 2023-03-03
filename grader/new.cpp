#include <iostream>
using namespace std;

int recur(int m){
    if (m == 0 || m == 1){
        return m;
    } else return recur(m-1) + recur(m-2);
}

int main(){

    int n;
    cin >> n;
    cout << recur(n) << endl;
}

