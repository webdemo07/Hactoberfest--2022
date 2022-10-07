#include<iostream>
using namespace std;

int main()
{
    cout<<"Number of elements : "<<endl;
    int n;
    cin>>n;

    cout<<"Input the numbers : ";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"List of sorted elements : ";

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n-1;j++)
        if(arr[i]>arr[j])
        {
            int temp;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        
    }

    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<endl;
    }
    return 0;
}