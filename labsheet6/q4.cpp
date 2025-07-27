// // Write three derived classes inheriting functionality of base class person 
// (should have a member function that asks to enter name and age) and with added unique features of student, and employee,
//  and functionality to set properties of student and employee objects. 
//  And make one member function for printing the address of the objects of classes (base and derived) using this pointer. 
//  Create two objects of the base class and the derived classes each and print the addresses of individual objects.
//   Using a calculator, calculate the address space occupied by each object and verify this with address spaces printed by the program.
#include<iostream>
#include <cstdint>
using namespace std;
class person{
    protected:
        string name;
        int age;
    public:
        void getdata(){
            cout<<"Name: ";
            cin>>name;
            cout<<endl<<"Age: ";
            cin>>age;
        }
        void addr(){
            cout<<"The address of this object is: "<<(uintptr_t)this<<endl;
        }
};

class student:public person{
    private:
        int stdId;
    public:
        void getdata(){
            person::getdata();
            cout<<"StdId: ";
            cin>>stdId;
        }
        void addr(){
            cout<<"The address of this object is: "<<(uintptr_t)this<<endl;
        }
};

class employee:public person{
    private:
        int empId;
    public:
        void getdata(){
            person::getdata();
            cout<<"EmpId: ";
            cin>>empId;
        }
        void addr(){
            cout<<"The address of this object is: "<<(uintptr_t)this<<endl;
        }
};

int main(){
    person p1,p2;
    student s1,s2;
    employee e1,e2; 

    p1.addr();
    p2.addr();

    s1.addr();
    s2.addr();

    e1.addr();
    e2.addr();

    cout<<"Size of person: "<<sizeof(person)<<" bytes"<<endl;
    cout<<"Size of student"<<sizeof(student)<<" bytes"<<endl;
    cout<<"Size of employee"<<sizeof(employee)<< "bytes"<<endl;
    
    return 0;
}