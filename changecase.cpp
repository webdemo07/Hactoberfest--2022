#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    cout<<"Input a sentence : ";
    string s,a;
    getline(cin,s);

    cout<<"Sentence in uppercase : ";

    //transform(s.begin(), s.end(), s.begin(), ::toupper);

    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='a' && s[i]<='z')
        {
            s[i]-=32;
            cout<<s[i];
        }
        else
        {
            cout<<s[i];
        }
        
    }
    cout<<endl;

    cout<<"Sentence in lowercase : ";

    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]+=32;
            cout<<s[i];
        }
        else
        {
            cout<<s[i];
        }
        
    }

    return 0;
}