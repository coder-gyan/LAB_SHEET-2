//q4
// Create a polymorphic class Vehicle and create other derived classes Bus, Car, and Bike from Vehicle. 
// Illustrate RTTI by the use of dynamic_cast and typeid operators in this program.
#include<iostream>
#include<typeinfo>
using namespace std;

class Vehicle{
    protected:
        string speed; //kmph for simplicity
    public:
        Vehicle(string s = ""){
            speed = s;
        }
        virtual void display(){

        }
};

class Bus: public Vehicle{
    private:
        string name;
    public:
        Bus(string n="",string s = ""):Vehicle(s){
            name = n;
        }
        void display(){
            cout<<"Bus Name: "<<name<<endl<<"Top Speed: "<<speed<<endl<<endl;
        }
};

class Car : public Vehicle{
    private:
        string name;
    public:
        Car(string n="", string s = ""): Vehicle(s){
            name = n;
        }
        void display(){
            cout<<"Car Name: "<<name<<endl<<"Top Speed: "<<speed<<endl<<endl;
        }
};

class Bike : public Vehicle{
    private:
        string name;
    public:
        Bike(string n="", string s = ""): Vehicle(s){
            name = n;
        }

        void display(){
            cout<<"Bike Name: "<<name<<endl<<"Top Speed: "<<speed<<endl<<endl;
        }

};

int main(){
    //EXTRAS -- NOT NEEDED
    //---------------------------------------------------------
    // Bus* bptr_toBus = new Bus("Tata",70);
    // bptr_toBus->display();

    // Bike* bptr_toBike = new Bike("Kawasaki Ninja H2R",400); 
    // bptr_toBike->display();

    // bptr_toBus = reinterpret_cast<Bus *>(bptr_toBike);
    // bptr_toBus->display();
    //----------------------------------------------------------
    
    Vehicle* bptr = new Vehicle("400");
    Bike* dptr = new Bike("Kawasaki Ninja H2R"); // :)
    bptr = dynamic_cast<Vehicle *>(dptr);
    bptr->display();

    cout<<"Type of Bike is: "<<typeid(Bike).name()<<endl;
    return 0;
}