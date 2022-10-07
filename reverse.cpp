#include<iostream>

using namespace std;

int main()
{
    int n,m;
    m=0;
    cout<<"Input number : "<<endl;
    cin>>n;

    while(n>0)
    {
        int a=n%10;
        m=m*10+a;
        n=n/10;
    }
    cout<<"Reverse number is: "<<m;

    return 0;
}