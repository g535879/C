
/*
  程序目的。输入 hello world（放入buff中） 输出 worldhello
  思路：1，把字符串按照空格分成2个。str1，str2.
       2，strcpy(buff,str2) 把第二个字符串覆盖掉buff
       3，strcat(buff,str1) 把第一个字符串追加到buff
 */
#include <stdio.h>
#include <string.h>
void my_split(char *str1,char *str2,char *str3){
    int pass_space = 0;
    while(*str2){
        if(!pass_space){
            if(*str2 == ' '){
                pass_space = 1;
                str2++;
                continue;
            }
            *str1++ = *str2++;
        }
        else{
            if(*str2 == '\n'){
                str2++;
                continue;
            }
            *str3++ = *str2++;
        }
        
    }
}

int main(void)
{

    char str1[50]="eeeq";
    char str2[50];
    char buff[50];
    fgets(buff,50,stdin);
    my_split(str1, buff,str2);
    strcpy(buff, str2);
    strcat(buff, str1);
    printf("%s\n",buff);
    return 0;
}