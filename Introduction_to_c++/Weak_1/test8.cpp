#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    int *parr[5] = {arr+1,arr+2,arr+3,arr+4,arr};
    int **pparr = parr;
    cout<<**(pparr+2)<<" ";
    cout<<*++pparr[2];
}