#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){

    std::ios_base::sync_with_stdio(false); std::cin.tie(0);

    int n,m,a,b,t;
    map<int,int> interval;
    vector<int> ans;

    cin >> n >> m;

    while(n--){
        cin >> a >> b;
        interval[a] = b;
    }

    while(m--){
        cin >> t;
        if (interval.find(t) != interval.end()){
            ans.push_back(1);
        } else {
            auto it = interval.lower_bound(t);
            it--;
            if (t >= it->first && t <= it->second){
                ans.push_back(1);
            } else {
                ans.push_back(0);
            }
        }
    }
    
    for (auto &x:ans){
        cout << x << " ";
    }

    cout << endl;
}