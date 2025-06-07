#include<iostream>
#include<iomanip>
using namespace std;
struct date{
    int mm;
    int dd;
    int yy;
};
void display(struct date);
int main(){
    struct date d;
    cout<<"Enter the month, date and year: "<<endl;
    cin>>d.mm>>d.dd>>d.yy;
    display(d);
    return 0;
}
void display(struct date d){
   cout<<"Date: "
    <<setfill('0')<<setw(2)<<d.mm<<"/"
    <<setfill('0')<<setw(2)<<d.dd<<"/"
    <<d.yy<<endl;
}