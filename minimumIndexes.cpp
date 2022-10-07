#include <iostream>
#include <stack>

using namespace std;

int main(){
    int n,m,k;
    cin>>n>>m;
    int arr[n+1],sum[n+1];

    for(int i=1;i<=n;i++){    
        cin>>arr[i];
        int a=arr[i];
        k=0;
        while(a!=0){
            int temp=a%10;
            k=k+temp;
            a=a/10;
        }
        sum[i]=k;
    }

    int q;
    k=1;
    int flag[n+1]={-1,-1,-1,-1,-1,-1};
    for(int i=m;i>0;i--){    
        cin>>q;
        for(int j=1;j<=n;j++){
            if(arr[q]<arr[j] && sum[q]>sum[j]){
                flag[k++]=j;
                break;
            }
        }
    }
    for(k=1;k<=n;k++)
        cout<<flag[k]<<endl;
    return 0;
}