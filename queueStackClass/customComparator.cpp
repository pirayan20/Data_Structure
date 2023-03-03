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

// operator as a class to be used in .main()
class StudentByNameComparator{
    public:
        bool operator()(const Student& lhs, const Student& rhs){
            return lhs.name < rhs.name;
        }
};

class GpaxThenName{
    public:
        bool operator()(const Student& lhs, const Student& rhs){
            if (lhs.gpax == rhs.gpax){
                return lhs.name < rhs.name;
            } return lhs.gpax < rhs.gpax;
        }
};


int main(){
    Student a(2.95,"Pirayan","Ranananad");
    Student b(4.00,"Noppavij","Saharatchai");
    Student c(4.00,"Punnasith", "Chivapong");
    cout << (a<b) << endl;
    
    StudentByNameComparator comp1;
    GpaxThenName comp2;

    priority_queue<Student,vector<Student>,StudentByNameComparator> pq(comp1);
    pq.push(a);
    pq.push(b);
    cout << pq.top().name << endl;

    priority_queue<Student,vector<Student>,GpaxThenName> pq2(comp2);
    pq2.push(a);
    pq2.push(b);
    pq2.push(c);
    cout << pq2.top().name << endl;
}