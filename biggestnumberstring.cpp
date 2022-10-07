#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    cout<<"Enter the string : ";
    string s;
    getline(cin,s);

    sort(s.begin(),s.end(),greater<int>());
    cout<<s<<endl;

    return 0;
}