/* 計算機概論實務-基本練習作業-作業7*/
/* 製作人：郭柏鋒 */
/* 完成時間：2019/03/08 10:00*/  
#include <stdio.h> //函示庫
#include <stdlib.h> //函示庫 
int main(void)
{
	int n,i=1,su=0;
	do
	{
		printf("----秀出1+2+....+n的總和----\n"); //顯示 
		printf("請輸入n值為："); //顯示 
		scanf("%d",&n); //輸入要加到幾 
	}
	while (n<=0); //一直迴圈抹除 
	do 
	su+=i++; //1+2+...+n 
	while (i <= n);//一直迴圈到加到幾 
	printf("1+2+...+%d=%d\n",n,su); //顯示 
	system("pause"); //暫停視窗  
	return 0; //回傳值為0   
	
}
