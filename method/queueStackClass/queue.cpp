#include <iostream>
#include <queue>
using namespace std;

int main(){
    // queue is first in-first out
    // cannot inspect the element in queue otherwise it is the front element;
    queue<int> q;
    for (size_t i=0; i<10; i++){
        q.push(i);
    } 

    //.front() will return the element within that queue-type
    // if .front() or .back() with the empty queue will cause an error
    cout << q.front() << endl;
    cout << q.back() << endl;

    q.pop();

    cout << q.front() << endl;

    // queue does not have an iterator;
}