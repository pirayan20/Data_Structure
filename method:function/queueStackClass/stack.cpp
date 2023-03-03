#include <iostream>
#include <stack>
using namespace std;

int main(){
    // stack is last in-first out
    // cannot inspect the element in stack otherwise it is the top element;
    stack<int> stk;
    for (size_t i=0; i<10; i++){
        stk.push(i);
    } 

    // we can check if the stack are empty or not with .empty() that will return in boolean
    if (!stk.empty()){
        
         //.top() will return the element within that stack-type
        // if .top() with the empty stack will cause an error
         cout << stk.top() << endl;

        stk.pop();

        cout << stk.top() << endl;
    }

   

    // stack does not have an iterator;

}