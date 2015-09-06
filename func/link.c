#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
} NODE;
//建立链表
NODE* create(NODE *head)
{
    NODE *p1,*p2;
    p1 = p2 = (NODE *)malloc(sizeof(NODE));
    printf("enter number ,enter <0 number stop the loop!\n");
    scanf("%d",&p1->data);
    p1->next = NULL;
    head = NULL;
    while(p1->data >= 0){
        if(head == NULL){
            head = p1;
        }
        else{
            p2->next = p1;
            p2 = p1;
        }
        p1 = (NODE *)malloc(sizeof(NODE));
       // printf("p2->data:\n");
        scanf("%d",&p1->data);
    }
    return head;
}
//插入链表
NODE* insert_link(NODE *head){
    int index;
    printf("enter insert index(start at index 0):\n");
    scanf("%d",&index);
    if (index < 0) {
        return head;
    }
    NODE *temp = head;
    
    while(index > 1){      // 找到要插入的节点的位置
        temp = temp->next;
        if(temp->next == NULL){
            
            printf("out of index！！\n");
            return head;
        }
        index--;
    }
    NODE *pt = (NODE *)malloc(sizeof(NODE));
    if(pt == NULL){
        printf("init fail!!!\n");
    }
    printf("inert your data:\n");
    scanf("%d",&pt->data);
    if(index == 0){ //插入到头部
        pt->next = head;
        return pt;
    }
    else{
        pt->next = temp->next;
        temp->next = pt;
    }
    return head;
}
//删除节点
NODE* delete_link(NODE *head,int index){
    NODE *temp = head;
    if(index < 0){
        return head;
    }
    while (index > 1) {
        temp = temp->next;
        if(temp->next == NULL){
            printf("out of index!!!!\n");
            return head;
        }
        index--;
    }
    if(index == 0){//删除头节点
        return head->next;
    }
    
    temp->next = temp->next->next;
    return head;
}

//输出链表
void printLink(NODE *p)
{
    NODE *temp = p;
    while (temp != NULL) {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(void)
{
    NODE *head = (NODE*)malloc(sizeof(NODE));
    if(head == NULL){
        printf("init fail！");
        return -1;
    }
    head = create(head); //建立链表
    printLink(head); //输出链表
    head = insert_link(head);//插入节点
    printLink(head);
    head = delete_link(head, 3);//删除节点
    printLink(head);
    free(head);
    return 0;
}