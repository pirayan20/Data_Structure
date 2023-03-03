#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// all the functions that work with iterator will need to use an ITERATOR;
int main(){
    vector<int> v = {9,-1,3,7,5,2,1,4};

    int x = 5;
    if (find(v.begin(),v.end(),x) != v.end()){
        cout << "Found" << endl;
    } else {
        cout << "Not found" << endl;
    }

    // must include<algorithm> to use .find()
    // .find(a,b,c) --> a,b are the position(iterator)
    // it will find the c from a to b
    // if not found, it will return b; ***
    // keep in mind that a,b and the return value will be an iterator;

    sort(v.begin(),v.end());
    // ascending order
    sort(v.begin(),v.end(),greater<int>());
    // descending order
}