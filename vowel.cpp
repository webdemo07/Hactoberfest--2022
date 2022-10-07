#include<iostream>

using namespace std;

int main()
{
    char c;
    int n1,n2;
    cout<<"Input an alphabet : ";
    cin>>c;

    n1=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    n2=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    
    if(n1||n2)
    {
        cout<<c<<" is a vowel";
    }
    else
    {
        cout<<c<<" is a consonent";
    }
    return 0;
}