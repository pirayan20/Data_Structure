#include <iostream>
#include <vector>
using namespace std;

int main(){ 

    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m;
    int w = 0;   
    vector<int> toe;
    vector<int> opponent; 
    cin >> n >> m;

    while (n--){
        int a;
        cin >> a;
        toe.emplace_back(a);
    }

    sort(toe.begin(),toe.end());

    while(m--){
        if (!toe.empty()){
                
        }
        
    }
}