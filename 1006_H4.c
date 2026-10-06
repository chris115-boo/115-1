#include <stdio.h>
int main()
{
    int login;
    int black;
    int 餘額;
    int 提款金額;
    printf("請輸入登入狀態(1:已登入,0未登入):");
    scanf("%d",&login);
    printf("請輸入帳戶餘額:");
    scanf("%d",&餘額);
    printf("請輸入提款金額:");
    scanf("%d",&提款金額);
    printf("請輸入黑名單狀態(1:是,0:否):");
    scanf("%d",&black);
    if (login==1 && 餘額>=提款金額 && !black==1)
    {
        printf("可以提款");    
    }
    else
    {
        printf("無法提款");
    }  
    return 0;
}