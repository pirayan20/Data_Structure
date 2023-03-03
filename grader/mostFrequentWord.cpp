#include <iostream>
#include <map>
using namespace std;

int main(){

    int n,k = 0;
    string name;
    pair<string,int> ans;
    map<string,int> m;
    cin >> n;

    while(n--){
        cin >> name;
        m[name]++;
    }

    for(auto it=m.begin(); it!=m.end(); it++){
        if (it->second >= k){
            ans = *it;
            k = it->second;
        }
    }

    cout << ans.first << " " << ans.second << endl;

}