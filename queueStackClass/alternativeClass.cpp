#include <iostream>
#include <string>
using namespace std;

// this is an alternative way to implement a class and a method for the class
// we'll see that it's just like an interface from Java but instead we can implement it outside of the class
class Student {
    public: 
        void setFullname(string name,string surname);
        string getFullname();
    private:
        string name,surname;
};

// ::Student to show that the function is belong to which class;
void Student::setFullname(string n,string sn){
    this->name = n;
    this-> surname = sn;
} 

string Student::getFullname(){
    return "[" + name + " " + surname + "]";
}

int main(){
    Student a;
    Student b;
    a.setFullname("Pirayan", "Rananand");
    cout << a.getFullname() << endl;
    cout << b.getFullname() << endl;
}