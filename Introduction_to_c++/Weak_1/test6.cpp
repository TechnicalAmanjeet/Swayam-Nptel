#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    for(int i=0;i<5;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<*(arr)<<" "<<*(arr+4)<<" ",*(arr+5);
    cout<<endl;
    rotate(arr,arr+4,arr+5);
    for(int i=0;i<5;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    rotate(arr,arr+1,arr+4);
    for(int i=0;i<5;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}