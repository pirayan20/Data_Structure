#include <iostream>
using namespace std;

namespace CP{
    template <typename T>
    class list {
        protected:
            class node {
                friend class list;
                public:
                    T data;
                    node *next;
                    node() : data(T()),next(NULL) {}
                    node(const T& data,node *next) : data(T(data)),next(next) {}
            };
        protected:
            node *mFirst;
            size_t mSize;
        public:
            list() : mFirst(NULL), mSize(0) {}
            
        
    };
}