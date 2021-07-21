#include<bits/stdc++.h>
using namespace std;

int main(){
    int d[] = {11,8,5,6,3};
    for(int i=0;i<5;++i){
        cout<<d[i]<<" ";
    }
    cout<<endl;
    sort(d,&d[4]);
    for(int i=0;i<5;++i){
        cout<<d[i]<<" ";
    }
    cout<<endl;
    cout<<&d<<" "<<&d[0];
}