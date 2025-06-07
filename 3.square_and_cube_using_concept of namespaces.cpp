//concept of namespaces
#include<iostream>
using namespace std;

namespace square{
    int num;
    int fun(int a){
        return a * a;
    }
}
namespace cube{
    int num;
    int fun(int a){
        return a * a * a;
    }
}
int main(){
    square::num=2;
    cube::num=3;
    cout<<"Cube: "<<cube::fun(square::num)<<endl;
    cout<<"Square: "<<square::fun(cube::num)<<endl;
    return 0;
}