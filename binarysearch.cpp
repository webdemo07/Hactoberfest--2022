#include<iostream>
using namespace std;

int binarysearch(int n,int key,int arr[])
{
    int s=0;
    int e=n;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
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

    cout<<"The number is in "<<binarysearch(n,key,arr)<<" position";

    return 0;
}