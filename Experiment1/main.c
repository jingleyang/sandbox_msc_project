#include <stdio.h>
#include <stdlib.h>

int sum(int a,int b){
    return a+b;
}
int main(int argc, const char *argv[]){
    int a=1;
    int b=2;
    int ans = sum(a,b);
    printf("sum(%d,%d) = %d\n",a,b,ans);
    return 0;
}
