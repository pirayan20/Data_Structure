#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int count;
    cin >> count;
    vector<int> v;

    for (int i=0;i<count;i++){
        string command;
        cin >> command;

        if (command == "pb"){
            int val;
            cin >> val;
            v.push_back(val);
        } else if (command == "sa"){
            sort(v.begin(),v.end());
        } else if (command == "sd"){
            sort(v.begin(),v.end(),greater<int>());
        } else if (command == "r"){
            reverse(v.begin(),v.end());
        } else {
            int val;
            cin >> val;
            vector<int>::iterator it = v.begin();
            v.erase(it+val);
        }
    }

    for (size_t i=0;i < v.size(); i++){
        cout << v[i] << " ";
    }

    cout << endl;
}