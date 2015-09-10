/*
strncpy
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
    char str1[50];
    char str2[50];
    char *p_str1 = str1;
    char *p_str2 = str2;
    int numb = 0;
    printf("请输入第一个字符串:\n");
    fgets(str1,50,stdin);
    printf("请输入第二个字符串:\n");
    fgets(str2,50,stdin);
    printf("请输入把第二个字符串复制到第一个字符串的位数\n");
    scanf("%d",&numb);
    if(numb > (int)strlen(str2)){
        numb = (int)strlen(str2);
    }
    while (numb > 0) {
        *p_str1++ = *p_str2++;
        numb--;
    }
    printf("%s",str1);
    return 0;
}