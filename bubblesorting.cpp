#include<iostream>
using namespace std;

int main()
{
    cout<<"Number of elements : "<<endl;
    int n;
    cin>>n;

    cout<<"Input the numbers : "<<endl;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int counter=1;
    while(counter<n)
    {
        for(int i=0;i<n-counter;i++)
        {
           if(arr[i]>arr[i+1])
            {
              int temp;
              temp=arr[i];
              arr[i]=arr[i+1];
              arr[i+1]=temp;
            }

        }
        counter++;
    }

    cout<<"Sorted array : "<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}