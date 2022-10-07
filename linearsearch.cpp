#include<iostream>
using namespace std;

int linearsearch(int n,int key,int arr[])
{
    for (int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    cout<<"Input n : "<<endl;
    int n;
    cin>>n;

    cout<<"Input the array : "<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Number to be searched : ";
    cin>>key;

    cout<<"The number is in "<<linearsearch(n,key,arr)<<" position";

    return 0;
}