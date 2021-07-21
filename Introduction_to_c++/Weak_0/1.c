#include<stdio.h>

int main(){
    typedef int x[3];
    x myarray[2] = {1,2,3,4,5,7};
    // printf("%u",sizeof(myarray));
    printf("%d %d %d ",myarray[0][0],myarray[0][1],myarray[0][2]);
    printf("\n");
    printf("%d %d %d ",myarray[1][0],myarray[1][1],myarray[1][2]);
    // printf("%s",typeof(myarray));
    printf("\n");
    printf("%d %d %d ",myarray[2][0],myarray[2][1],myarray[2][2]);
    // printf("%u",sizeof(int));
    // printf("   %u",sizeof(x));
    return 0;
}