#include <stdio.h>
int main(void)
{
    int numb[5];
    int *p = numb;
    p+=4;
    int isContain = 0;
    int p_numb = 0;
    printf("请输入五个数:\n");
    int index = 0;
    for(;index < 5; index++){
        scanf("%d",&numb[index]);
    }
    printf("请输入一个数字：\n");
    scanf("%d",&p_numb);
    for(index--;index >=0; index--){
        if(*p--  == p_numb){
            isContain = 1;
            break;
        }
    }
    printf("%s",isContain == 1 ? "YES" : "NO");
}