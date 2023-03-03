#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);cin.tie(0);
    int l,m,n;
    cin >> n >> m >> l;
    vector<int> plus;
    set<string> words;
    string s;

    while(l--){
        int x;
        cin >> x;
        x %= 26;
        plus.push_back(x);
    }

    while (n--){
        cin >> s;
        words.insert(s);
    }

    while (m--){
        cin >> s;
        for (size_t i=0; i<s.size(); i++){
            if (s[i] + plus[i] > 122) s[i] -= 26;
            s[i] += plus[i];
        }

        if (words.find(s) != words.end()){
            cout << "Match\n";
        } else cout << "Unknown\n";
    }

}