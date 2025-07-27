//q3
// Create a class called Musicians to contain three methods string(), wind(), and perc(). 
// Each of these methods should initialize a string array to contain the following instruments

// -  veena, guitar, sitar, sarod and mandolin under string()
// -  flute, clarinet saxophone, nadhaswaram, and piccolo under wind()
// -  tabla, mridangam, bangos, drums and tambour under perc()

// It should also display the contents of the arrays that are initialized. 
// Create a derived class called TypeIns to contain a method called get() and show(). The get() method must display a  menu as follows

// Type of instruments to be displayed
// a.  String instruments
// b.  Wind instruments
// c.  Percussion instruments
// The show() method should display the relevant detail according to our choice. 
// The base class variables must be accessible only to their derived classes. -->

#include<iostream>
#include<cstring>
using namespace std;
class Musicians{
    protected:
        string string_ins[5], wind_ins[5], perc_ins[5];
    public:
        void string(){
            string_ins[0]="veena";
            string_ins[1]="guitar";
            string_ins[2]="sitar";
            string_ins[3]="sarod";
            string_ins[4]="mandolin";
        }
        void wind(){
            wind_ins[0]="flute";
            wind_ins[1]="clarinet";
            wind_ins[2]="saxophone";
            wind_ins[3]="nadhaswaram";
            wind_ins[4]="piccolo";
        }
        void perc(){
            perc_ins[0]="tabla";
            perc_ins[1]="mridangam";
            perc_ins[2]="bangos";
            perc_ins[3]="drums";
            perc_ins[4]="tambour";
        }
        void showString(){
            int i;
            cout<<"String Instruments:"<<endl;
            for(i=0;i<5;i++){
                cout<<string_ins[i]<<endl;
            }
            cout<<endl;
        }
        void showWind(){
            int i;
            cout<<"Wind Instruments:"<<endl;
            for(i=0;i<5;i++){
                cout<<wind_ins[i]<<endl;
            }
            cout<<endl;
        }
        void showPerc(){
            int i;
            cout<<"perc Instruments:"<<endl;
            for(i=0;i<5;i++){
                cout<<perc_ins[i]<<endl;
            }
            cout<<endl;
        }
};
class TypeIns:public Musicians{
    private:
        char res;
    public:
        void get(){
            cout<<"Type of instruments to be displayed"<<endl
            <<"a.  String instruments"<<endl
            <<"b.  Wind instruments"<<endl
            <<"c.  Percussion instruments"<<endl;
            cout<<"Option?: ";
            cin>>res;
        }
        void show(){
            switch(res){
                case 'a':
                    string();
                    showString();
                    break;
                case 'b':
                    wind();
                    showWind();
                    break;
                case 'c':
                    perc();
                    showPerc();
                    break;
                default:
                    cout<<"Response not matched with a, b or c."<<endl;
            }
        }
};

int main(){
    TypeIns t;
    t.get();
    t.show();
    return 0;
}