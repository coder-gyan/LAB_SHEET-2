//q2
// Create a class Person and two derived classes Employee and Student, inherited from class Person. 
// Now create a class Manager which is derived from two base classes Employee and Student. 
// Show the use of the virtual base class.

#include<iostream>
using namespace std;

class Person{
    protected:
        string name;
    public:
        Person(string n=""){
            name = n;
            cout<<"Constructor of name"<<endl;
        }
        void display(){
            cout<<"Name = "<<name<<endl;
        }
};

class Employee : virtual public Person{
    protected:
        string empId;
    public:
        Employee(string n,string e):Person(n){
            empId = e;
            cout<<"Constructor of Employee"<<endl;
        }
};

class Student : virtual public Person{
    protected:
        string stdId;
    public:
        Student(string n, string s):Person(n){
            stdId = s;
            cout<<"Constructor of student"<<endl;
        }
        
};

class Manager : public Employee, public Student{
    private:
        string hotel;
    public:
        Manager(string n="", string e="", string s="", string h="") : Employee(n,e), Student(n,s),Person(n){
            hotel = h;
            cout<<"Constructor of manager"<<endl;
        }
};

int main(){
    Manager m("Tom","123","456","Soaltee");
    m.Person::display();
    return 0;
}