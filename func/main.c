#include<stdio.h>
#include<unistd.h>
#include <stdlib.h>
#include <string.h>
typedef struct Student{
    int ID;
    char NAME[50];
    int AGE;
    char SEX[50];
} STU;
int main(void)
{

    STU stu_arr[100];
    STU newStu;
    int index = 0;
    int UserID = 10;
    char isContinue;
    while(1){
        system("clear");
        printf("==========================================\n");
        printf("=               1.插入                    =\n");
        printf("=               2.删除                    =\n");
        printf("=               3.修改                    =\n");
        printf("=               4.查找                    =\n");
        printf("=               5.退出                    =\n");
        printf("==========================================\n");
        int numb;
        rewind(stdin);//清空输入缓冲区
        printf("请输入要操作的选项：\n");
        scanf("%d",&numb);
        switch (numb) {
            case 1:
                isContinue = 'y';
                while(isContinue == 'Y' || isContinue == 'y'){
                    system("clear");
                    rewind(stdin);//清空输入缓冲区
                    printf("请输入姓名:\n");
                    scanf("%s",newStu.NAME);
                    printf("请输入性别:\n");
                    scanf("%s",newStu.SEX);
                    printf("请输入年龄:\n");
                    scanf("%d",&newStu.AGE);
                    newStu.ID = UserID++;
                    stu_arr[index++] = newStu;
                    printf("ID\t\t姓名\t\t性别\t\t年龄\n");
                    for(int i = 0 ; i < index; i++){
                        printf("%d\t\t%s\t\t%s\t\t%d\n",stu_arr[i].ID,stu_arr[i].NAME,stu_arr[i].SEX,stu_arr[i].AGE);
                    }
                    rewind(stdin);//清空输入缓冲区
                    printf("是否继续插入(y/n)?\n");
                    scanf("%c",&isContinue);
                }
                break;
            case 2:
                isContinue = 'y';
                while(isContinue == 'y' || isContinue =='Y'){
                    system("clear");
                    if(index == 0){
                        printf("数据库暂无数据!\n");
                        sleep(1);
                        break;
                    }
                    printf("ID\t\t姓名\t\t性别\t\t年龄\n");
                    for(int i = 0 ; i < index; i++){
                        printf("%d\t\t%s\t\t%s\t\t%d\n",stu_arr[i].ID,stu_arr[i].NAME,stu_arr[i].SEX,stu_arr[i].AGE);
                    }
                    rewind(stdin);//清空输入缓冲区
                    printf("请输入要删除数据的ID：\n");
                    int id;
                    scanf("%d",&id);
                    int isFind = 0;
                    for(int i = 0 ; i < index; i++){
                        if(stu_arr[i].ID == id){
                            isFind = 1;
                            for(int j = i; j < index-1; j++){
                                stu_arr[j] = stu_arr[j+1];
                            }
                            index--;
                            break;
                        }
                    }
                    if(isFind){
                        printf("删除成功！\n");
                    }
                    else{
                        printf("未找到该ID的数据，删除失败！");
                    }
                    rewind(stdin);//清空输入缓冲区
                    printf("是否继续删除(y/n)?\n");
                    scanf("%c",&isContinue);
                    
                }
                break;
            case 3:
                isContinue = 'y';
                while (isContinue == 'y' || isContinue == 'Y') {
                    system("clear");
                    if(index == 0){
                        printf("数据库暂无数据!\n");
                        sleep(1);
                        break;
                    }
                    printf("ID\t\t姓名\t\t性别\t\t年龄\n");
                    for(int i = 0 ; i < index; i++){
                        printf("%d\t\t%s\t\t%s\t\t%d\n",stu_arr[i].ID,stu_arr[i].NAME,stu_arr[i].SEX,stu_arr[i].AGE);
                    }
                    rewind(stdin);//清空输入缓冲区
                    printf("请输入要修改的数据的ID：\n");
                    int id;
                    scanf("%d",&id);
                    int isFind = 0;
                    for(int i = 0 ; i < index; i++){
                        if(stu_arr[i].ID == id){
                            isFind = 1;
                            rewind(stdin);//清空输入缓冲区
                            printf("请输入姓名:\n");
                            scanf("%s",stu_arr[i].NAME);
                            printf("请输入性别:\n");
                            scanf("%s",stu_arr[i].SEX);
                            printf("请输入年龄:\n");
                            scanf("%d",&stu_arr[i].AGE);
                            printf("修改成功！修改后的数据\n");
                            printf("ID\t\t姓名\t\t性别\t\t年龄\n");
                            printf("%d\t\t%s\t\t%s\t\t%d\n",stu_arr[i].ID,stu_arr[i].NAME,stu_arr[i].SEX,stu_arr[i].AGE);
                            break;
                        }
                    }
                    if(!isFind){
                        printf("未找到该ID的数据，修改失败！\n");
                    }
                    rewind(stdin);//清空输入缓冲区
                    printf("是否继续修改(y/n)?\n");
                    scanf("%c",&isContinue);
                }
                break;
            case 4:
                isContinue = 'y';
                while (isContinue == 'y' || isContinue == 'Y') {
                    system("clear");
                    if(index == 0){
                        printf("数据库暂无数据!\n");
                        sleep(1);
                        break;
                    }
                    printf("ID\t\t姓名\t\t性别\t\t年龄\n");
                    for(int i = 0 ; i < index; i++){
                        printf("%d\t\t%s\t\t%s\t\t%d\n",stu_arr[i].ID,stu_arr[i].NAME,stu_arr[i].SEX,stu_arr[i].AGE);
                    }
                    rewind(stdin);//清空输入缓冲区
                    printf("请输入要查找的姓名:\n");
                    char name[20];
                    scanf("%s",name);
                    int isFind = 0;
                    for(int i = 0 ; i < index; i++){
                        if(strcmp(stu_arr[i].NAME, name) == 0){
                            if(!isFind){
                                printf("找到结果：\n");
                                printf("ID\t\t姓名\t\t性别\t\t年龄\n");
                                isFind = 1;
                            }
                            printf("%d\t\t%s\t\t%s\t\t%d\n",stu_arr[i].ID,stu_arr[i].NAME,stu_arr[i].SEX,stu_arr[i].AGE);
                        }
                    }
                    if(!isFind){
                        printf("未找到该ID的数据，查找失败！\n");
                    }
                    rewind(stdin);//清空输入缓冲区
                    printf("是否继续查找(y/n)?\n");
                    scanf("%c",&isContinue);
                }
                break;
            case 5:
                exit(0);
                break;
            default:
                printf("未知选项,请重新输入！！！！ \n");
                sleep(1);
                system("clear");
                break;
        }
        
    }
    
    return 0;
}