#include <iostream>
#include <vector>

using namespace std;

int main(){
     // Accessing vector with out of bound index
    vector<int> v5(2);

    cout << "-- v5 -- " << "\n";
    for (size_t i=0;i<20;i++){
        cout << i << " : " << v5[i] << "\n";
    }

}