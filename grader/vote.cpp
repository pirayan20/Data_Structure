#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(pair<string, int>& a,pair<string, int>& b){
    return a.second > b.second;
}

vector< pair<string,int> > sort(map<string,int> &m){
    vector< pair<string,int> > ans;
    for (auto &it:m){
        ans.push_back(it);
    } 

    sort(ans.begin(),ans.end(),cmp);
    return ans;
}

int main(){

    int n,k,count;
    cin >> n >> k;
    string name;
    vector< pair<string,int> > sorted;
    map<string,int> candidate;

    while(n--){
        cin >> name;
        candidate[name]++;
    }

    sorted = sort(candidate);
    if (sorted.size() < k){
        count = sorted.size();
    } else {
        count = k;
    }

    int min = sorted.begin()->second;
    for (auto it=sorted.begin();it!=sorted.begin()+count;it++){
        if (it->second < min && min >= 1){
            min = it->second;
        }
    }

    cout << min << endl;

}