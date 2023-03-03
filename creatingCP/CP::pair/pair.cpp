#include <iostream>
#include <string>
using namespace std;

namespace CP {
    template <typename T1, typename T2>
    class pair {
        public:
            T1 first;
            T2 second;
            // -----------operator--------------
            bool operator==(const pair<T1,T2> &other){
                return(first==other.first && second==other.second);
            }

            bool operator<(const pair<T1,T2> &other) const{
                return(first < other.first || 
                    (first == other.first && second < other.second));
            }
    };
}

int main(){
    CP::pair<int,string> p1,p2;
    p1.first = 20; p1.second = "Somchai";
    // copying CP::pair
    CP::pair<int,string> a(p1);
    p2 = p1;

    cout << p2.first << "," << p2.second << endl;

    // we'll see that we cannot check equal or check less than 
    // so we will have to implement an operator overload in the class
    if (p1 == p2) {
        cout << "yes" << endl;
    } 

    if (p1 < a){
        cout << "yes" << endl;
    }
    
}
