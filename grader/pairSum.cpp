#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){

	int m,n,x,y;
	cin >> n >> m;
	map<int,int> arr;  
	vector<string> ans;

	while (n--){
		cin >> x;
		arr[x]++;
	}

	while (m--){
		cin >> y;
		bool can = false;
		for(auto &k:arr){
			if (arr.find(y-k.first) != arr.end()){
				if (k.first == y-k.first){
					if (k.second > 1){
						can = true;
						break;
					}
				} else {
					can = true;
					break;
				}
			}
		}
		if (can){
			ans.push_back("YES");
		} else {
			ans.push_back("NO");
		}
	}

	for (string k:ans){
		cout << k << "\n";
	}
}
