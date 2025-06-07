//Feet to inches converter
#include <iostream>
using namespace std;
void conv(){
    float feet;
    cout<<"Feet: ";
    cin>>feet;
    cout<<"Inches: "<<feet*12<<endl;
}
float conv(float feet){
    
    float inch;
    inch = feet * 12;
    return inch;
}
void conv(float feet, float & inch){
    inch= 12 * feet;
}

int main(){
    //using no argument
    conv();

    //using 1 argument
    float feet;
    cout<<"Feet: ";
    cin>>feet;
    cout<<"Inches: "<<conv(feet)<<endl;

    //using two argument
    float inch;
    conv(feet,inch);
    cout<<"Inches: "<<inch<<endl;

}