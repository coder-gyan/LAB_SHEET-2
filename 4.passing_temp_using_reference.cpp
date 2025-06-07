//prog using function pass by reference and return by reference
#include<iostream>
using namespace std;
float & temp(float& a, float& b){
    float temp;
    if(a>b)
        return a;
    else{
        return b;
    }
}
int main(){
    float t1,t2,new_t;
    cout<<"Enter two temperatures: "<<endl<<"T1: ";
    cin>>t1;
    cout<<"T2: ";
    cin>>t2;
    cout<<"Enter a new value for the larger temperature: ";
    cin>>new_t;
    temp(t1,t2) = new_t;
    cout<<"t1: "<<t1<<endl<<"t2: "<<t2<<endl;
}