#include <iostream>
using namespace std;

class Complex{
    private:
        float real,imaginary;
    public:
        void set(float a,float b){
            real=a;
            imaginary=b;
        }
        void display(){
            if (imaginary<0){cout<<real<<" - i"<<(-1)*imaginary<<endl;}
            else {cout<<real<<" + i"<<imaginary<<endl;}
        }
        Complex add(Complex n){
            float a=(real+n.real)*1.0;
            float b=(imaginary+n.imaginary)*1.0;
            Complex sum;
            sum.set(a,b);
            return sum;
        }
        Complex subtract(Complex n){
            float a=(real-n.real)*1.0;
            float b=(imaginary-n.imaginary)*1.0;
            Complex diff;
            diff.set(a,b);
            return diff;
        }
        Complex multiply(Complex n){
            float a=(real*n.real)-(imaginary*n.imaginary);
            float b=(imaginary*n.real)+(real*n.imaginary);
            Complex multiply;
            multiply.set(a,b);
            return multiply;
        }
};

int main(){
    int choice;
    float a,b;
    Complex n1,n2;
    cout<<"Enter the value of real and imaginary parts---"<<endl;
    cout<<"First complex number: ";
    cin>>a>>b;
    n1.set(a,b);
    cout<<"Second complex number: ";
    cin>>a>>b;
    n2.set(a,b);
    n1.display();
    n2.display();
    cout<<"1.ADDITION\n2.SUBTRACT\n3.MULTIPLICATON\nEnter your choice:";
    cin>>choice;
    switch(choice){
        case 1:{ Complex a=n1.add(n2);
                cout<<"Sum = ";
                a.display();
                break;}
        case 2:{ Complex s=n1.subtract(n2);
                cout<<"Difference = ";
                s.display();
                break;}
        case 3:{ Complex m=n1.multiply(n2);
                cout<<"Multiply = ";
                m.display();
                break;}
        default:cout<<"Invalid choice\n";
    }
    return 0;
}