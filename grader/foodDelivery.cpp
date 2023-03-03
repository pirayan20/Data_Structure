#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);cin.tie(0);
    queue<int> q1,q2;
    int n,m,t,a,b,c;
    int get=0;
    vector<int> target;
    vector<int> got;
    
    cin >> n >> m;
    int k = m;

    while(m--){
        cin >> t;
        target.push_back(t);
    }

    while (m--){
        cin >> c;
        if (c==1){
            cin >> a >> b;
            if (a==1){
                q1.push(b);
            } else {
                q2.push(a);
            }
        } else {
            if (!q1.empty() && !q2.empty()){
                if (q1.front() <= q2.front()){
                    get += q1.front();
                    got.push_back(get);
                    q1.pop();
                } else {
                    get += q2.front();
                    got.push_back(get);
                    q2.pop();
                }
            } else if (q1.empty()){
                get += q2.front();
                got.push_back(get);
                q2.pop();
            } else {
                get += q1.front();
                got.push_back(get);
                q1.pop();
            }
        }
    }

    for (int j:target){
        auto temp = find(got.begin(),got.end(),j);
        if (temp != got.end()){
            cout << temp - got.begin() + 1 << " ";
        } else {
            auto temp2 = lower_bound(got.begin(),got.end(),j);
            cout << temp - got.begin() << " ";
        }
    }

    cout << endl;
}