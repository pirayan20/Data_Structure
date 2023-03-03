#include <iostream>
#include <vector>
using namespace std;

namespace CP{
    template <typename T>
    class queue{
        protected:
            vector<T> v;
            int mFront;

        public:
            queue() : v(), mFront() {};

            bool empty() {return v.size();}
            size_t size() {return v.size() - mFront;}

            const T& front() const {return v[mFront];}
            const T& back() const {return v.back();}

            void push(const T& element){
                v.push_back(element);
            }

            void pop(){
                mFront++;
            }
    };
}