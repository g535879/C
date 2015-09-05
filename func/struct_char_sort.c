#include<stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Grade{
    char g[10];
}Grad;
/*自定义字符大小比较方法
 */
int array_cmp(char *g1,char *g2){
    int len = (int)strlen(g1) < (int)strlen(g2) ? (int)strlen(g1) : (int)strlen(g2);
    int index;
    for(index = 0; index < len; index++){
        if(g1[index] < g2[index]){          //g1 比 g2 小
            return 1;
        }
        else if(g1[index] > g2[index]){
            return 0;
        }
    }
    return len == (int)strlen(g2) ? 0 : 1;
}
void quick_sort(Grad *grade,int f,int l){
    int i = f;
    int j = l;
    if(j - i < 1){
        return;
    }
    char flag[10];//标兵
    strcpy(flag,grade[i].g);
    while(i != j){
        while(array_cmp(grade[j].g,flag) && j > i){
            j--;
        }
        if(j > i){
            strcpy(grade[i].g, grade[j].g);
            i++;
        }
        while (!array_cmp(grade[i].g,flag) && i < j) {
            i++;
        }
        if(j > i){
            strcpy(grade[j].g, grade[i].g);
            j--;
        }
        if(i == j){
            if(grade[i].g != flag){
                strcpy(grade[i].g,flag);
            }
            else{
                printf("th");
            }
        }
    }
    quick_sort(grade, f, i);
    quick_sort(grade, i+1, l);
    
}

int main(void)
{
    Grad *grade = (Grad*)malloc(10*sizeof(Grad));
    int index = -1;
    while (++index < 10) {
        
        scanf("%s",(grade[index].g));
    }
    quick_sort(grade, 0, --index);
    for (; index >= 0; index--) {
        printf("%s ",grade[index].g);
    }
    free(grade);
    return 0;
}