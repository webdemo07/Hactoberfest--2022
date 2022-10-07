#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
        int admno;
        string sname;
        float eng,math,science,total;
        void ctotal(){
            total=eng+math+science;
        }
    
    public:
        void takeData(int a,string name,float e,float m,float s){
            admno=a;
            sname=name;
            eng=e;
            math=m;
            science=s;
            ctotal();
        }
        void showData(){
            cout<<"Admission No : "<<admno<<"\nName: "<<sname<<"\nEnglish: "<<eng<<"\nMaths: "<<math<<"\nScience: "<<science<<"\nTotal: "<<total;
        }
};

int main(){
    Student s;
    s.takeData(68,"Shubhi",91.2,95.6,99.8);
    s.showData();
    return 0;
}