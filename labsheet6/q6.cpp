//q6
// Write a base class that asks the user to enter a complex number, and make a derived class that adds the 
// complex number of its own to the base. Finally, make a third class that is a friend of derived and calculate
//  the difference between the base complex number and its own complex number.

#include<iostream>
using namespace std;
class Complex2;
class Complex{
    protected:
        float real;
        float imag;
    public:
        Complex(float r=0, float i=0){
            real = r;
            imag = i;
        }
        void input(){
            cout<<"Real: ";
            cin>>real;
            cout<<"Imag: ";
            cin>>imag;
        }
};

class Complex1: public Complex{
    private:
        float real1;
        float imag1;
    public:
        Complex1(float r=0, float i=0): Complex(){
            real1 = r;
            imag1 = i;
        }
        void inputderived(){
            input();
            cout<<"Real: ";
            cin>>real1;
            cout<<"Imag: ";
            cin>>imag1;
        }
        Complex add(){
            float r = real1 + real;
            float i = imag1 + imag;
            cout<<r<<" + "<<i<<"i"<<endl;
            return Complex(r,i);
        }
        friend Complex2;
};
class Complex2{
    private:
        float real;
        float imag;
    public:
        Complex2(float r=0, float i=0){
            real = r;
            imag= i;
        }
        void inputfriend(){
            cout<<"Real: ";
            cin>>real;
            cout<<"Imag: ";
            cin>>imag;
        }

        void sub(Complex1& c){
            float r = c.real - real;
            float i = c.imag - imag; 

            cout<<r<<" + "<<i<<"i"<<endl;
        }
};

int main(){
    Complex1 c1;
    c1.inputderived();
    Complex2 c2;
    c2.inputfriend();
    
    c1.add();
    c2.sub(c1);
    return 0;
}