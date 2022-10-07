#include <iostream>
using namespace std;

int main(){
    int n,sum_r=0,sum_c=0;
    cout<<"Enter the order the matrix : ";
    cin>>n;
    int m[n][n];
    cout<<"Enter the value of 2d matrix";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>m[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;;
    }
    cout<<endl;
    cout<<"Sum of rows = ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum_r+=m[i][j];
        }
        cout<<sum_r<<" ";
    }
    cout<<endl;
    cout<<"Sum of columns = ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            sum_c+=m[j][i];
        }
        cout<<sum_c<<" ";
    }
    cout<<endl;

    return 0;
}