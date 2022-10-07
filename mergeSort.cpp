#include <iostream>
using namespace std;

void merge(int a[],int beg,int mid,int end){
    int k,temp[10],i=beg,j=mid+1,index=beg;
    while(i<=mid && j<=end){
        if(a[i] < a[j]){
            temp[index]=a[i];
            i++;
        }
        else{
            temp[index]=a[j];
            j++;
        }
        index++;
    }
    if(i>mid){
        while(j<=end){
            temp[index]=a[j];
            index++;
            j++;
        }
    }
    else{
        while(i<=mid){
            temp[index]=a[i];
            index++;
            i++;
        }
    }
    k=beg;
    while(k<index){
        a[k]=temp[k];
        k++;
    }
}

void mergeSort(int a[],int beg,int end){
    int mid;
    if(beg<end){
        mid=(beg+end)/2;
        mergeSort(a,beg,mid);
        mergeSort(a,mid+1,end);
        merge(a,beg,mid,end);
    }
}

int main(){
    int a[]={57,42,84,64,90,28,36,47,19,11};
    mergeSort(a,0,9);
    for(int i=0;i<10;i++){
        cout<<" "<<a[i];
    }
    return 0;
}