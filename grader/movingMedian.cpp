#include <iostream>
#include <set>
#include <vector>
#include <queue>
using namespace std;
int main(){
    cin.tie(0);
    vector<int> v;
    int n,w;
    cin >> n >> w;
    queue<int> q;
    for(int i=0;i<=w;i++){
        int x;
        cin >> x;
        v.push_back(x);
        q.push(x);
    }
    sort(v.begin(),v.end());
    // for(auto e:v){
    //     printf("%d ",e);
    // }printf("\n");
    cout << v[(w/2)] << " ";
    for(int i=w+1;i<n;i++){
        int x;
        cin >> x;
        q.push(x);
        auto po = lower_bound(v.begin(),v.end(),x);
        v.insert(po,x);
        po = lower_bound(v.begin(),v.end(),q.front());
        v.erase(po);
        q.pop();
    cout << v[(w/2)] << " ";
    }
}