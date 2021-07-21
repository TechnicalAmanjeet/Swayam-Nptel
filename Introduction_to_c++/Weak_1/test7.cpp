#include<bits/stdc++.h>
using namespace std;

struct A{int a;};
struct B{int a,b;};
struct D{int a,b,c;};
struct E{
    enum riya{z,x,y};
    union ram{
        A a1;
        B b1;
        D c1;
    };
    riya f;
    ram g;
};
// int main(){
// //   D aman;
// //   cout<<sizeof(aman);  
// //   cout<<endl;
// //   cout<<sizeof(E->riya)<<" "<<sizeof(E->ram);

// enum type(aman,abha,adkll);
// type s;
// cout<<sizeof(s);
// }

int main(){
    enum ram{a,b,c};
    ram s;
    cout<<a<<" ";
    cout<<sizeof(s);
}