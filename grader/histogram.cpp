#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){

    map<string,int> m;
    vector<string> v;
    int n;
    cin >> n;

    while (n--){
        string name;
        cin >> name;
        m[name]++;
        if (m[name] == 1){
            v.push_back(name);
        }
    }

    sort(v.begin(),v.end());

    for (auto name:v){
        if (m[name] > 1){
            cout << name << " " << m[name] << "\n";
        }
    }
}