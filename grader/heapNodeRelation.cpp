#include <iostream>
using namespace std;

void relation(int a,int b){
     if (a == b){
        cout << "a and b are the same node" << "\n";
    } else if (a == 0){
        cout << "a is an ancestor of b" << "\n";
    } else if (b == 0){
        cout << "b is an ancestor of a" << "\n";
    } else {
        if (a > b){
            while (a > b){
                a = (a-1)/2;
            }
            if (a == b) cout << "b is an ancestor of a" << "\n";
            else cout << "a and b are not related" << "\n";
        }
        else {
            while (b > a){
                b = (b-1)/2;
            }
            if (a==b) cout << "a is an ancestor of b" << "\n";
            else cout << "a and b are not related" << "\n";
        }
    }    
}

int main(){

    ios_base::sync_with_stdio(false); cin.tie(0);
    int a,b,m,n;

    cin >> n >> m;

    while (m--){
        cin >> a >> b;
        relation(a,b);
    } 
}