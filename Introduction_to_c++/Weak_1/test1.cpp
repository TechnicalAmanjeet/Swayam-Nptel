#include<iostream>
using namespace std;

int main(){
    char a[] = "amanje";
    char* p = a;
    cout<<"ram"<<'\0'<<"aman"<<endl;
    for(;*p;p++);
    int i = p-a;

    cout<<i<<" ";
    return 0;

}