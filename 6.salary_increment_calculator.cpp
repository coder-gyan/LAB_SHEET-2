//New salary after increment calculator
#include<iostream>
using namespace std;
float new_sal(float sal,float inc=10){
    return sal + sal * inc/100;
}

int main(){
    float ceo = 35000;  
    float io=25000;
    float analyst=24000;
    float programmer= 18000;
    cout<<"2010 salaries after increment: "<<endl;
    cout<<"CEO: "<<new_sal(ceo,9)<<endl;
    cout<<"IO: "<<new_sal(io,10)<<endl;
    cout<<"Analyst: "<<new_sal(analyst,12)<<endl;
    cout<<"Programmer"<<new_sal(programmer, 12)<<endl;
}