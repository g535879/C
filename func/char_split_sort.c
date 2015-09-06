#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    int no;           //学号
} STU;
//排序数字
void numb_cmp(STU *s,int len)
{
    int index;
    int temp_numb; //中间变量
    temp_numb = s[len].no;
    for(index = 0; index < len; index++){
        if(temp_numb > s[index].no){     //找到位置
            
            for(;len > index; len--){
                s[len].no = s[len -1].no;
            }
            
            s[index].no = temp_numb;
        }
    }
}

int main(void)
{
    STU *stu = (STU*)malloc(8*sizeof(STU));
    char *in = (char *)malloc(30*sizeof(char));
    char *deal = NULL;
    int index = 0;
    fgets(in, 30, stdin);         //接收键盘输入
    deal = strtok(in, " ");
    while(deal != NULL){
        stu[index].no = atoi(deal);
        numb_cmp(stu, index++);     //
        deal = strtok(NULL, " ");      //分割字符
    }
    
    for(index--;index >=0; index--){
        printf("%d ",stu[index].no);
    }
    return 0;
}