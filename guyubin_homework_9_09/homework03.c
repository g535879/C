#include <stdio.h>
int main(void)
{
    int numb[5];
    int *p = numb;
    int max_numb = 0;
    int sum = 0;
    p+=4;
    printf("请输入五个数:\n");
    int index = 0;
    for(;index < 5; index++){
        scanf("%d",&numb[index]);
    }
    for(index--;index >=0; index--){
        if(*p > max_numb){
            max_numb = *p;
        }
        sum += *p--;
    }
    printf("max_numb:%d,sum:%d",max_numb,sum);
}