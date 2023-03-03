#include <iostream>
#include <queue>
using namespace std;

int main(){
    // an element in pq has to be comparable [ and we can have a custom comperator ] just like in set an map
    // pq wont be based on the time that has push but based on the value that was compared

    // *there is no back of the queue*
    // priority_queue has the same interface as stack
    priority_queue<int> pq;
    pq.push(10);
    pq.push(30);
    pq.push(20);

    // you will see that the most priority will be at the front of the priority_queue
    cout << pq.top() << endl;

    pq.pop();
    pq.push(15);

    cout << pq.top() << endl;
}