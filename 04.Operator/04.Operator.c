//5/2+1^3*4

#include <stdio.h>
#include <math.h>

int main(){
    int a=5;
    int b=2;
    int c=1;
    int d=3;
    int e=4;

    float z=(float)a/b + pow(c,d)*e;

    printf("%.1f",z);
    return 0;
}
