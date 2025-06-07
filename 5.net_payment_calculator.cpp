//net payment calculator
#include<iostream>
using namespace std;
inline float payment_calc(float salary){
    return salary - (.1 * salary);
}
int main(){
    float salary;
    cout<<"Employee salary: ";
    cin>>salary;
    cout<<"Net payment: "<<payment_calc(salary)<<endl;
    return 0;
}