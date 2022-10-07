#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
        string name,branch,rollNo;
    public:
        void set(){
            cout<<"Enter name : ";
            getline(cin,name);
            cout<<"Enter branch : ";
            getline(cin,branch);
            cout<<"Enter roll number:";
            getline(cin,rollNo);
        }
        bool search(string r){
            if(rollNo==r)
                return true;
            return false;
        }
        void display(){
            cout<<"NAME : "<<name<<"\nBRANCH : "<<branch<<"\nROLL NO : "<<rollNo<<endl;
        }
};

int main(){
    Student s[2];
    cout<<"\nEnter the details of 20 students------------------"<<endl;
    cin.ignore();
    for(int i=0;i<2;i++){
        s[i].set();
    }
    string roll;
    bool flag=0;
    cout<<"Enter roll number to be searched:";
    getline(cin,roll);
    int i;
    for(i=0;i<2;i++){
        flag=s[i].search(roll);
        if(flag)
            break;
    }
    if(flag==1){
        s[i].display();
    }
    else
        cout<<"Not found\n";
    return 0;
}
