#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int* ptr = arr+4;
    // cout<<*ptr<<" "<<arr[0]<<" "<<arr[4]<<endl;
    for(int i=0;i<5;++i){
        // cout<<*(ptr+i)<<" ";
        cout<<*(ptr-i)<<" ";
        // cout<<-ptr[i]<<" ";
        cout<<(-i)[ptr]<<" ";
        cout<<endl;
    }

}