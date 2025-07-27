//q1
// Write a program that can convert the Distance (meter, centimeter) to meters measurement in float
//  and vice versa. Make a class Distance with two data members, meter and centimeter.
//   You can add function members as per your requirement.
#include<iostream>
using namespace std;
class Distance{
    private:
        int meter;
        int centimeter;
    public:
        Distance(int m, int cm){
            meter = m;
            centimeter = cm;
        }
        Distance(float m){
            meter = (int)m;
            centimeter= (int)((m- int(m))*100);
        }
        void showdata(){
            cout<<"Meter: "<<meter<<endl<<"Centimeter: "<<centimeter<<endl;
        }
        operator float(){
            return (meter + (float)centimeter/100);
        }
};

int main(){
    Distance d(2,30);

    float m = d;
    cout<<"Meters in float: "<<m<<endl;
    Distance e(4.3);
    e.showdata();
    return 0;
}