#include <iostream>
#include <map>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){

    cout << std::fixed << std::setprecision(2);
    int n,sub,score;
    string name;
    cin >> n;
    map <int, vector<int> > subject;
    map <string, vector<int> > teacher;
    
    while(n--){
        cin >> sub >> name >> score;
        subject[sub].push_back(score);
        teacher[name].push_back(score);
    }

    for (auto it=subject.begin(); it!=subject.end(); it++){
        cout << it->first << " " << 
        (accumulate(it->second.begin(),it->second.end(),0) + 0.0)/it->second.size() << "\n"; 
    }

    for (auto it=teacher.begin(); it!=teacher.end(); it++){
        cout << it->first << " " << 
        (accumulate(it->second.begin(),it->second.end(),0) + 0.0)/it->second.size() << "\n"; 
    }
}