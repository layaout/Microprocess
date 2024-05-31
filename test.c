#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
typedef unsigned char u8;
int main(){
    // const float a = 0.019;
    // float b = -2.6/0.106;
    // float sum = -log10(a*exp(b));
    // float num = sum - (int)sum;
    // printf("num = %f\n",num);
    // printf("sum = %.16f\n",(double)num*pow(10,-12));
    // float a = 1/7.0;
    char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\0";
    printf("a = %d\n",strlen(a));
    printf("%x %x %x %x\n",a[0],a[1],a[2],a[3]);
    int *p = (int*)a;
    printf("%x",*(p+1));
    // printf("%d %d %d %d\n",sizeof(int),sizeof(char),sizeof(short),sizeof(long));
}