#include <iostream>
using namespace std;

namespace CP{
    template <typename T>
    class node {
        public:
            T data;
            node *left,*right;
            node() : data(T()),left(NULL),right(NULL) {}
            node(const T& data, node *left, node *right):
                data(data),left(left),right(right) {}

            int get_size(node *n){
                if (n == NULL) return 0;
                return 1 + get_size(n->left) + get_size(n->right);
            }

            int get_height(node *n){
                if (n == NULL) return -1;
                return 1 + max(get_height(n->left),get_height(n->right));
            }

            node* copy(node *n){
                if (n == NULL) return NULL;
                node *lc = copy(n->left);
                node *rc = copy(n->right);
                node *result = new node(n->data,lc,rc);
            }

            void preorder(node *n){
                cout << n-> data << " ";
                preorder(n->left);
                preorder(n->right);
            }

            void inorder(node *n){
                inorder(n->left);
                cout << n->data << " ";
                inorder(n->right);
            }

            void postorder(node *n){
                postorder(n->left);
                postorder(n->right);
                cout << n->data << " ";
            }
    };
}