#include <iostream>
#include <string>
using namespace std;

class Salary{
    private:
        float basic,GP,DA,TA,HRA,PF,loan;
        string name,ID;
    public:
        void set(float b ,float gp, float l, string n, string id);
        void display();
};

void Salary :: set(float b ,float gp, float l, string n, string id){
    basic=b;
    GP=gp;
    loan=l;
    name=n;
    ID=id;
    DA=0.15*(basic+GP);
    TA=0.02*(basic+GP);
    HRA=0.05*(basic+GP);
    PF=0.12*(basic+GP+DA);
}

void Salary ::display(){
    float total_deduction=HRA+PF;
    float gross_pay=basic+GP+DA+HRA;
    cout<<"Name : "<<name<<endl;
    cout<<"ID : "<<ID<<endl;
    cout<<"Basic + GP : "<<basic+GP<<endl;
    cout<<"DA : "<<DA<<endl;
    cout<<"HRA : "<<HRA<<endl;
    cout<<"PF : "<<PF<<endl;
    cout<<"Total deduction : "<<total_deduction<<endl;
    cout<<"Gross Pay : "<<gross_pay<<endl;
    cout<<"Net Pay : "<<gross_pay-total_deduction<<endl;
}

int main(){
    string name, id;
    cout<<"Enter your name and ID : "<<endl;
    getline(cin,name);
    getline(cin,id);
    float basic,loan,gp;
    cout<<"Enter your Basic , GP and Loan : "<<endl;
    cin>>basic>>gp>>loan;
    Salary s1;
    s1.set(basic,gp,loan,name,id);
    s1.display();
    return 0;
}