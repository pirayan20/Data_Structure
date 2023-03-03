#include <iostream>
#include <map>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);

    int n,m;
    long long p1,p2;
    cin >> n >> m;
    map<long long ,long long> dad;

    while(n--){
        cin >> p1 >> p2;
        dad[p2] = p1;
    }

    while(m--) {
        cin >> p1 >> p2;
        cout << (p1 != p2 && dad[dad[p1]] != 0
         && dad[dad[p1]] == dad[dad[p2]]? "YES\n": "NO\n");
    }
}