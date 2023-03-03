#include <iostream>
#include <vector>

using namespace std;

int main(){
    // to initialize vector with no default parameter
    vector<int> v1;
    cout << "Size of v1 is " << v1.size() << "\n";
    
    // to initialize vector with the default element
    vector<int> v2 = {2,3,4};
    // another ways to implement
    // the first parameter would be the size of the vector
    // and the second parameter is the default element in the vector (if none implemented --> 0)
    vector<int> v3(2,1);

    // copy the vector with the same element type --> "Copy constructor"
    vector<int> v4(v3);
    v4 = v3;

    cout << v1[0] << ", " << v1[1] << ", " << v1[2] << "\n";

    // to add an element to the back of the vector
    // == append() [pyhthon]
    v1.push_back(99);
    cout << v1.size() << endl;

}