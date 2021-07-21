#include<stdio.h>
#include<string.h>

struct ram{
    int x;
    void ra(){
        printf("how are you");
    }
};

int main(){
    struct ram a;
    a.x = 5;
    printf("%d",a.x);
    a.ra();
}