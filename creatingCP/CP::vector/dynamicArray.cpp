#include <iostream>
using namespace std;

class test{
    public:
    // constructor
    test() : data() {cout << "created" << endl;}; 
    // destructor
    ~test() {cout << data << " destroyed" << endl;};
    int data;
}; 

int main(){
    test *a,*b;

    // for datatype T, new T allocates a block with a size of T and then call a constructor
    // new T[n], allocates n blocks of T and then call a constructor of T in each block
    // each will RETURN the ADDRESS of the first block

    a = new test; // dynamic create
    a->data = 10;
    cout << a->data << endl;
    delete a;

    // or pointer x, delete x call the destructor
    // delete [] call the destructor of all blocks in the dynamic array
    // each will also DE-ALLOCATES the memory pointed by x

    b = new test[4]; // dynamic array
    b[0].data = 10;
    b[1].data = 20;
    b[2].data = 30;
    b[3].data = 40;
    delete[] b;

    // for everything that is created by NEW, we must call DELETE on it
    // if we don't, that memory is not deleted until all memory is used up
    // this is call "MEMORY LEAK"
}