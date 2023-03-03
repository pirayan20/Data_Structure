#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> punch(vector<string> &v, vector<string>::iterator it,int k) {
    //write some code here
    //don’t forget to return something
    string middle = *it;
    for (size_t i=0; i<k; i++){
        auto it = find(v.begin(),v.end(),middle);
        auto itnext = it + 1;
        auto itbef = it - 1;
        if (find(v.begin(),v.end(),*itnext) != v.end()){
            v.erase(itnext);
        }
        if (find(v.begin(),v.end(),*itbef) != v.end()){
            v.erase(itbef);
        }
    }
    v.erase(find(v.begin(),v.end(),middle));
    return v;
}

int main() {
    int n,j,k;
    cin >> n >> j >> k;
    vector<string> v(n);
    for (int i = 0;i < n;i++) {
        cin >> v[i]; }
    cout << "Result after punch" << endl;
    vector<string> result = punch(v, v.begin() + j, k);
    for (auto &x : result) {
        cout << x << endl;
    }
}