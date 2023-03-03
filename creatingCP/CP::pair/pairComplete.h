#ifndef _CP_PAIR_INCLUDED
#define _CP_PAIR_INCLUDED

#include <iostream>
using namespace std;

namespace CP{
    template <typename T1, typename T2>
    class pair {
        public: 
            T1 first;
            T2 second;

            // defualt constructor, using initializer list
            pair() : first(), second() {};

            // custom constructor, using intitalizer list
            pair(const T1 &a, const T2 &b) : first(a),second(b) {}; 

            // equality operator
            bool operator==(const pair<T1,T2> &other){
                return (this->fist == other.first && this->second == other.second);
            }
            
            // comparison operator
            bool operator<(const pair<T1,T2> &other) const{
                return (this->first < other.first || 
                (this->first == other.first && this->second < other.second));
            }
    };
}
#endif