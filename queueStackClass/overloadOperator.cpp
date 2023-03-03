#include <iostream>
#include <string>
using namespace std;

// CONST mean that the rhs has to be const not a variable that can be change the value
// & are implemented for telling we that we have to use the variable
string operator*(string& lhs, const int rhs){
    string result = "";
    for (size_t i=0; i< rhs; i++){
        result += lhs;
    }
    return result;
}

int main(){
    string a = "abc ";
    // you'll see that we cannot swap places between the string and the int
    // ,hence the overloading operator function that we have implemented
    cout << (a*3) << endl;
}