#include <iostream>
#include <set>
using namespace std;

int main() {
    set < pair<string,int> > s = {{"somchai",5},{"abc",4}}; 

    cout << (*it).first;
    // same as
    cout << it->first;
}