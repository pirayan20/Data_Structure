#include <iostream>
using namespace std;

namespace CP{
    template <typename T>
    class node {
        public:
            T data;
            node *next;
            
            // constructor
            node():
                data(T()), next(NULL) { }

            node(const T& data, node* next):
                data(T(data)) , next(next) { }
    };
}

int main(){
    CP::node<int> *p = NULL;
    p = new CP::node<int>(10,NULL);
    CP::node<int> *q = NULL;
    q = new CP::node<int>(10,NULL);
    p -> next = q;
    q -> next = new CP::node<int>(10,NULL);
}