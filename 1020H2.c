#include <stdio.h>
int main()
{
  int money; 
  int a=0;
  do
  {
    printf("請輸入提款金額(輸入0結束)");
    scanf("%d",&money);
    a+=money;
    
  } while (money !=0);
printf("提款總金額：%d",a);
return 0;
}