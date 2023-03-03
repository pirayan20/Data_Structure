#include<iostream>
#include <map>
#include <algorithm>

using namespace std;

int main() {
    map<int,int> m;

    m[2] = 10;
    m[5] = 30;
    m[10] = 7;
    m[11] = 8;
    m[20] = 9;

    auto it = m.lower_bound(5);

    m.insert(it,make_pair(5,2));
    for (auto &p:m){
        cout << p.first << " and " << p.second << endl;
    }

}
