#include <iostream>
#include <string>
#include <stack>

using namespace std;


int main(){
	string str;
	getline(cin,str);
	
    stack<char>s;
    string temp,t;
	for(auto str:str){
        if(str!='\\')
            s.push(str);
        else{
            while(s.top()!='/' ){
                temp=s.top();
                t.append(temp);
                s.pop();
            }
            s.pop();
            for(auto t:t){
                s.push(t);
            }
            t.erase();
        }
    }
    while(!s.empty()){
        temp=s.top();
        t.append(temp);
        s.pop();
    }

    for(auto t:t){
        s.push(t);
    }
    t.erase();
    while(!s.empty()){
        temp=s.top();
        t.append(temp);
        s.pop();
    }
    cout<<t<<endl;
    return 0;
}