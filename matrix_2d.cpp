#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int a[n];
    cout<<"Enter the values of array : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int largest1 = a[0];
    for (int i = 0; i < n; i++) {
        if (a[i] > largest1) {
            largest1 = a[i];
        }
    }
    int largest2 = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > largest2 && a[i] < largest1)
            largest2 = a[i];
    }
    cout<<"Largest : "<<largest1<<"\nSecond Largest : "<<largest2<<endl;
    return 0;
}