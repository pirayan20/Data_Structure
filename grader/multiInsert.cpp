#include <iostream>
#include <vector>
using namespace std;

void multiple_add(vector<int> &v, int value, int position, int count) {
    vector<int> v2;
    size_t i = 0;
    while (i <= v.size()){
        if (i != position){
            if (i != v.size()){
                v2.push_back(v[i]);
            }
            i++;
        } else {
            while (count--){
                v2.push_back(value);
            }
            if (position != v.size()) v2.push_back(v[i]);
            i++;
        }
    }
    v = v2;
    
}   

int main() {

    std::ios_base::sync_with_stdio(false); cin.tie(0);
    int n,value,position,count;
    cin >> n >> value >> position >> count;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    
    multiple_add(v,value,position,count);

    cout << "After call multiple_add" << endl << "Size = " << v.size() << endl;
    for (auto &x : v) cout << x << " ";
    cout << endl;
}