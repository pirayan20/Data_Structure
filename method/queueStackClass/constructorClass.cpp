#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
        Student(float score) {gpax=score;}
        void setFullname(string name,string surname){
            this->name = name;
            this->surname = surname;
        }
        string getFullname(){return "[" + name + " " + surname + "]";}
        bool isFirstHonor() {return gpax >= 3.6;}
    private:
        string name,surname;
        float gpax;
};

int main(){
    Student a(2.95);
    a.setFullname("Pirayan","Ranananad");
    cout << a.getFullname() << endl;
    if (a.isFirstHonor()){cout << "YES" << endl;} else {cout << "NO" << endl;}
}