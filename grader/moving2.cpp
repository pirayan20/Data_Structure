#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); cin.tie(0);
    vector<int> v;
    int n,w,m;
    cin >> n >> w;
    int k = n;

    while (k--){
        cin >> m;
        v.push_back(m);
    }

    for (size_t i=0; i< n-w; i++){
        vector<int> temp(v.begin()+i,v.begin()+i+w+1);
        sort(temp.begin(),temp.end());
        cout << temp[w/2] << ' ';
    }
    cout << endl;
    
}