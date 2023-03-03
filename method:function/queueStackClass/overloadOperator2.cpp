#include <iostream>
#include <string>
#include <queue>
using namespace std;

class Student{
    public:
        Student(float score, string name, string surname) {
            gpax = score;
            this->name = name;
            this->surname = surname;
        }
        string getFullname(){return "[" + name + " " + surname + "]";}

        //overloading operator <
        bool operator<(const Student& other) const {
            return gpax < other.gpax;
        }   
        string name,surname;
        float gpax;
};

int main(){
    Student a(2.95,"Pirayan","Rananand");
    Student b(3.67,"Noppavij","Saharatchai");
    cout << (a<b) << endl;
    priority_queue <Student> pq;
    pq.push(a);
    pq.push(b);
    cout << pq.top().name << endl;
}