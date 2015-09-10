/*
strncmp
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
    char str1[50];
    char str2[50];
    char *p_str1 = str1;
    char *p_str2 = str2;
    printf("请输入第一个字符串:\n");
    fgets(str1,50,stdin);
    printf("请输入第二个字符串:\n");
    fgets(str2,50,stdin);
    int isEqual = 1;
    int str1_len = (int)strlen(str1);
    int str2_len = (int)strlen(str2);
    if(str1_len != str2_len){
        isEqual = 0;
    }
    if(isEqual){
        while (*p_str1) {
            if(*p_str1++ != *p_str2++){
                isEqual = 0;
                break;
            }
            str1_len--;
        }
    }
    
    printf("两个字符串%s相等!",isEqual == 1 ? "" : "不");
    return 0;
}