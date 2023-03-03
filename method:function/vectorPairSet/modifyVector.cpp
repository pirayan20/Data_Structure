#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> v){
    cout << "Size of Vector is " << v.size() << ": ";
    for (int i=0; i< v.size(); i++) cout << v[i] << ", ";
    cout << endl;
}

int main(){
    vector<int> v(3,10);
    print(v);
    v.resize(6);
    print(v);
    v.resize(1);
    print(v);
    v.resize(7);
    print(v);
    // .resize(): if resize to a smaller size, it would be the same element within the length
    // but if resize to a bigger size, it will return the default value of that type in those index;

    v.pop_back();
    // erase the last element

    vector<int> v1(3,8);
    v1.insert(v1.begin(),1);
    v1.insert(v1.begin()+3,2);
    v1.insert(v1.end(),3);
    print(v1);
    v1.erase(v1.begin());
    v1.erase(v1.begin()+2);
    print(v1);
    // .erase() and insert() is used to insert and delete the whole index and the element in the
    // given position. But keep in mind that the position is need to be an iterator;
}