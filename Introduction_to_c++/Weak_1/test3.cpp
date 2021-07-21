#include<iostream>
using namespace std;

union am{
    char a[4];
    int b;
};

int main(){
    
    am an;
    an.b = 257;
    for(int i=3;i>=0;--i){
        cout<<(int)an.a[i]<<" ";
    }
    cout<<endl;
    cout<<an.b;
}