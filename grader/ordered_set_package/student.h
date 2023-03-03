#include <vector>
#include <set>
using namespace std;

template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    set<T> s(A.begin(),A.end());
    v = A;
    for (const T& b:B){
        auto it = s.find(b);
        if (it == s.end()) v.push_back(b);
    }
    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    set<T> s(B.begin(),B.end()); 
    for (const T& a: A){
        if (s.find(a) != s.end()) v.push_back(a);
    }
    return v;
}
