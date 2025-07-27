// q2
//Write two classes to store distances in meter-centimeter and feet-inch systems respectively. 
// Write conversions functions so that the program can convert objects of both types.
#include<iostream>
using namespace std;
class Metric{
    protected:
        int meter;
        int centimeter;
    public:
        Metric(int m = 0, int cm = 0){
            meter = m;
            centimeter = cm;
        }
        void showdata(){
            cout<<"Meter: "<<meter<<endl<<"Centimeter: "<<centimeter<<endl; 
        }
        int getmeter(){
            return meter;
        }
        int getcentimeter(){
            return centimeter;
        }
};
class Imperial{
    private:
        int feet;
        int inch;
    public:
        Imperial(int ft = 0, int in = 0){
            feet = ft;
            inch = in;
        }
        Imperial(Metric m){
            float total_cm=m.getmeter()*100 + m.getcentimeter(); 
            float total_inch = total_cm /2.54;
            feet = (int)(total_inch / 12);
            inch = (int)(total_inch - feet * 12);
            // feet = m.getmeter() * 3.3;
            // inch = m.getcentimeter() / 2.54;
        }
        void showdata(){
            cout<<"Feet: "<<feet<<endl<<"Inch: "<<inch<<endl;
        }
        operator Metric(){
            float total_inch = feet *12 + inch;
            float total_cm = total_inch * 2.54;
            int m = (int)(total_cm/100);
            int cm = (int)(total_cm) % 100;
            return Metric(m, cm);
        }
};
int main(){
    Metric m1(1,79), m2;
    Imperial i1(5,5),i2 ;

    m2 = i1;
    i2 = m1;
    m1.showdata();
    i1.showdata();
    cout<<endl;
    m2.showdata();
    i2.showdata();

    return 0;
}