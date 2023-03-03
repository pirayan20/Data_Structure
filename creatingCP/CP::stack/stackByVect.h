#include <iostream>
using namespace std;

namespace CP{
    template <typename T>
    class stack {
        protected:
            vector<T> v; 
        public:
            stack() : v() { }
            // --------- capacity function ---------
            bool empty() const {return v.empty();}
            size_t size() const {return v.size();}
            // -------------- access ---------------
            const T& top() const {return v.back();}
            // ------------ modifier ---------------
            void push(const T& element) {v.push_back(element);}
            void pop() {v.pop_back();}
    }; 
}