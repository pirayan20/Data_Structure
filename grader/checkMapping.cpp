#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,i,k;
    vector<int> all;
    set<int> all2;

    cin >> n;
    k = n;
    
    while(k--){
        cin >> i;
        all.push_back(i);
        all2.insert(i);
    }

    if (all.size() != all2.size()){
        cout << "NO" << "\n";
    } else if (*(--all2.end()) > n){
        cout << "NO" << "\n";
    } else if (*all2.begin() < 1){
        cout << "NO" << "\n";
    } else {
        cout << "YES" << "\n";
    }
    
}