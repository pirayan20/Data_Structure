#include <iostream>
#include <string>
#include <queue>
using namespace std;

namespace CP{
    template <typename T1, typename T2>
    class pair{
        public:
            T1 first;
            T2 second;

            // custom constructor, using initializer list
            // because of we can initialize pair with default value as well
            // so we have to use initializer list to satisfied all the way to implement CP::pair
            pair() : first(), second() {}
            pair(const T1 &a, const T2 &b) : first(a), second(b) {}

            // ---------- operator ----------
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
    CP::pair<int,bool> p(10,false);
    CP::pair<string,int> q("abc",42), r(" ",0);

    cout << (q<r) << endl;
    priority_queue< CP::pair<string,int> > pq;
    pq.push(r);
    pq.push(q);
    cout << pq.top().first << endl;

    CP::pair<string,int> x(q);
    CP::pair<string,int> y = x;

    CP::pair<string,int> w;
    vector< CP::pair<int,int> > v(10);
    for(auto &x : v){
        cout << x.first << endl;
    }
    // now CP::pair is complete;
}