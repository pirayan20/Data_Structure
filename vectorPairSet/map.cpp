#include<iostream>
#include<map>
using namespace std;

int main(){
    //same as dict in python
    //association data structure with same property as set
    //internally implemented as a set with "pair" data type
    map<string,int> m;
    // map betweem "Key type" string and "Mapped type" int;
    m["somchai"] = 10;
    m["somying"] = -5;
    cout << "Size = " << m.size() << endl;

    cout << "m[\"xxx\"] = " << m["xxx"] << endl;
    // m["xxx"] would take an mapped value as a default value of the datatype that was implemented before;

    for (auto it = m.begin(); it != m.end(); it++){
        cout << it->first << " is mapped to " << it->second << endl;
    }  

    m["abc"]++;
    cout << "now size = " << m.size() << endl;
    for (auto &x:m){
        cout << x.first << " is mapped to " << x.second << endl;
        // it would sort by "Key" type and not based on anything with mapped type; 
    }

}