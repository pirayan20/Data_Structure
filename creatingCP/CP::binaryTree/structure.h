#include <iostream>
using namespace std;

namespace CP{
    template<typename T>
    class node{
        T data;
        node *left,*right,*parent;
        node():
            data(T()),left(NULL),right(NULL),parent(NULL) {};
        node(const T& data,node *left, node *right, node*parent):
            data(T(data)), left(left), right(right), parent(parent){};
    };
}