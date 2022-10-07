#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int n,a,b;
    cout<<"Input a number : ";
    cin>>n;
    b=0;
    a=n;

    while(n>0)
    {
        int m=n%10;
        b=b+ (m*m*m);
        n=n/10;
    }
    if(a==b)
    {
        cout<<a<<" is an armstrong number";
    }
    else
    {
        cout<<a<<" is not an armstrong number";
    }
    
    return 0;
}