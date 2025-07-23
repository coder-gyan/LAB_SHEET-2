//q1
// Write a program to create a class shape with functions to find the area of the shapes and display the names of the shapes 
// and other essential components of the class. Create derived classes circle, rectangle, and trapezoid each having overriding
//  functions area() and display(). Write a suitable program to illustrate virtual functions and virtual destructors.
#include<iostream>
using namespace std;
const float PI = 2.14;
class Shape{
    protected:
        string *shape = new string;
    public:

        Shape(){
            cout<<"constructor of shape"<<endl;
        }

        virtual ~Shape(){
            delete shape;
            cout<<"Destructor of Shape."<<endl;
        }

        virtual void area(){
            cout<<"The area is: ";
        }

        virtual void display(){
            cout<<"Name of shape: "<<*shape<<endl;
        }        
};
class Circle: public Shape{
    private:
        float* radius = new float;
    public:
        Circle(float r=0, string s="Circle"){
            cout<<"Constructor of circle"<<endl;
            *radius = r;
            *shape = s;
        }
        ~Circle(){
            cout<<"Destructer of circle"<<endl;
            delete radius;
        }

        void area(){
            float area = PI * (*radius) * (*radius);
            cout<<"Area of "<<*shape<<" is: "<<area<<endl;
        }

        void display(){
            cout<<"Name of shape: "<<*shape<<endl<<endl;
        }
};

class Rectangle: public Shape{
    private:
        float* length = new float;
        float* breadth = new float;
    public:
        Rectangle(float l=0, float b=0, string s="Rectangle"){
            *length = l;
            *breadth = b;
            *shape = s;
            cout<<"Constructor of Rectangle"<<endl;
        }
        ~Rectangle(){
            delete length;
            delete breadth;
            cout<<"Destructor of Rectangle"<<endl;
        }
        void area(){
            float area = *length * *breadth;
            cout<<"Area of "<<*shape<<" is: "<<area<<endl;
        }
        void display(){
            cout<<"Name of shape: "<<*shape<<endl<<endl;
        }
};

class Trapezoid : public Shape{
    private:
        float* base1 = new float;
        float* base2 = new float;
        float* height = new float;
    public:
        Trapezoid(float b1=0, float b2=0, float h=0, string s="Trapezoid"){
            *base1 = b1;
            *base2 = b2;
            *height = h;
            *shape = s;
            cout<<"Constructor of Trapezoid"<<endl;
        }
        ~Trapezoid(){
            delete base1;
            delete base2;
            delete height;
            cout<<"Destructor of Trapezoid"<<endl;
        }
        void area(){
            float area = .5 * (*base1 + *base2) * *height;
            cout<<"Area of "<<*shape<<" is: "<<area<<endl;
        }

        void display(){
            cout<<"Name of shape: "<<*shape<<endl<<endl;
        }
};


int main(){
    Circle c(5);
    Shape* bptr_toCircle = &c;
    bptr_toCircle->area();
    bptr_toCircle->display();
    
    Rectangle r(2,3);
    Shape* bptr_toRectangle = &r;
    bptr_toRectangle->area();
    bptr_toRectangle->display();

    Trapezoid t(4,2,1);
    Shape* bptr_toTrapezoid = &t;
    bptr_toTrapezoid->area();
    bptr_toTrapezoid->display();

    return 0;
}