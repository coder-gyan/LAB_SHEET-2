//q3
//Write a program with an abstract class Student and create derive classes Engineering, Medicine and Science from base class Student.
//  Create the objects of the derived classes and process them and access them using an array of pointers of type base class Student.

#include<iostream>
using namespace std;

class Student{
    protected:
        string name;
    public:
        Student(string n=""){
            name = n;
        }
        virtual void display() = 0;
};

class Engineering: public Student{
    private:
        string stdId;
    public:
        Engineering(string n="", string s="") : Student(n){
            stdId = s;
        }
        void display(){
            cout<<"Engineer Name: "<<name<<endl<<"StdId: "<<stdId<<endl<<endl;
        }
};

class Medicine : public Student{
    private:
        string hName;
    public:
        Medicine(string n="",string h=""):Student(n){
            hName = h;//hospital name
        }
        void display(){
            cout<<"Student name: "<<name<<endl<<"Hospital name: "<<hName<<endl<<endl;
        }
};
class Science : public Student{
    private:
        string scId;
    public:
        Science(string n="", string sc=""): Student(n){
            scId = sc;
        }
        void display(){
            cout<<"Science student name: "<<name<<endl<<"Std Id: "<<scId<<endl<<endl;
        }
};

int main(){
    Engineering e("Leonardo","123");
    Student* bptr_toE = &e;
    bptr_toE->display();

    Medicine m("Munna","420");
    Student* bptr_toM = &m;
    bptr_toM->display();

    Science s("Elon","X");
    Student* bptr_toS = &s;
    bptr_toS->display();

    return 0;
}