#include <stdio.h>
int main(void)
{
    
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 1;
    int e = 2;
    int f = 3;
    int *p1 = &a;
    int *p2 = &b;
    int *p3 = &c;
    *p1 = *p1 + *p2 + *p3;
    *p2 = *p1 - *p2 - *p3;
    *p3 = *p1 - *p2 - *p3;
    *p1 = *p1 - *p2 - *p3;
    printf("第一种:\na:%d,b:%d,c:%d\n",a,b,c);
    int *p4 = &d;
    int *p5 = &e;
    int *p6 = &f;
    int *temp1 = p4;
    int *temp2 = p5;
    p4 = p6;
    p5 = temp1;
    p6 = temp2;
    printf("第二种：\nd:%d,e:%d,f:%d",*p4,*p5,*p6);
    
}