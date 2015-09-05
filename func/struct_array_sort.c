#include<stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Grade{
    int g;
}Grad;
void quick_sort(Grad *grade,int f,int l){
    int i = f;
    int j = l;
    if(j - i < 1){
        return;
    }
    int flag = grade[i].g;//标兵
    while(i != j){
        while(grade[j].g <= flag && j > i){
            j--;
        }
        if(j > i){
            grade[i].g = grade[j].g;
            i++;
        }
        while (grade[i].g >= flag && i < j) {
            i++;
        }
        if(j > i){
            grade[j].g = grade[i].g;
            j--;
        }
        if(i == j){
            grade[i].g = flag;
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
        
        scanf("%d",&(grade[index].g));
    }
    quick_sort(grade, 0, --index);
    for (; index >= 0; index--) {
        printf("%d ",grade[index].g);
    }
    free(grade);
    return 0;
}