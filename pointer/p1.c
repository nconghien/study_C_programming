#include<stdio.h>
#include<stdint.h>

int main(){
    int16_t *a = (int16_t *)(0xFF);
    int16_t *b;
    b=2;
    printf("%d\n",a);
    printf("%d\n",&a);
    printf("%d\n",b);
    printf("%d",&b);
    return 0;
}