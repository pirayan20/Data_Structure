#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

set<int> intersect(vector<int> &v1,vector<int> &v2){

    set<int> ans;
    set<int> temp;
    for(int x:v1){
        temp.insert(x);
    }
    for (int x:v2){
        if (temp.find(x) != temp.end()){
            ans.insert(x);
        }
    }

    return ans;

}

int main(){

    int M,N,c;
    cin >> M >> N;
    vector<int> v1,v2;

    for (int i=0;i<M;i++){
        cin >> c;
        v1.push_back(c);
    } 

    for (int i=0;i<N;i++){
        cin >> c;
        v2.push_back(c);
    }

    set<int> ans = intersect(v1,v2);
    for (int x:ans){
        cout << x << " ";
    }
    cout << endl;

}