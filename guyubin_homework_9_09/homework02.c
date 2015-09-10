#include <stdio.h>
int main(void)
{
    int numb[5];
    int *p = numb;
    p+=4;
    printf("请输入五个数:\n");
    int index = 0;
    for(;index < 5; index++){
        scanf("%d",&numb[index]);
    }
    for(index--;index >=0; index--){
        printf("%d ",*p--);
    }
    
}