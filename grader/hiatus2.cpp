#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m,y,mo;
    vector< pair<int,int> > date;  

    cin >> n >> m;

    while (n--){
        cin >> y >> mo;
        date.push_back(make_pair(y,mo));
    }

    sort(date.begin(),date.end());
    
    while (m--){
        cin >> y >> mo;
        auto it = lower_bound(date.begin(),date.end(),make_pair(y,mo));
        if (*it == make_pair(y,mo)){
            cout << "0 0 " ;
        } else if (it == date.begin()){
            cout << "-1 -1 ";
        } else {
            it--;
            cout << it->first << " " << it->second << " ";
        }
    }

    cout << "\n";
}
