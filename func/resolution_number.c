#include<stdio.h>
int main(void)
{
    int number;
    int n = 1;
    scanf("%d",&number);
    while(n * (n+1) > 2*number || (n+1)*(n+2) <= 2 * number){ //获取最大的位数
        n++;
    }
    printf("对于%d进行分解,结果是:\n",number);
    int i = n;
    for(; i > 1; i--){
        int temp = 2*number - (i)*(i-1) ;// 中间变量
        if(!(temp&1)){ //必须为偶数
            if(temp % (2 * i) == 0){
                int x = temp / (2 * i);
                if(x > 0){
                    printf("匹配成功:\n");
                    for(int j = 0 ; j < i; j++){
                        printf("%d ",x+j);
                    }
                }
                break;
            }
            
        }
    }
    if (i  == 1) {
            printf("未找到结果!");
    }
    
    return 0;
}