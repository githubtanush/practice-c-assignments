#include<stdio.h>
int main(){
    int a=56,e,f,g,h;
    char b='A';
    float c=5.6;
    double d=7.89;
    e=sizeof(a);
    f=sizeof(b);
    g=sizeof(c);
    h=sizeof(d);
    printf("%d %d %d %d",e,f,g,h);
    getchar();
}