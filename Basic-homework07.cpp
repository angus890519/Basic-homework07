/* �p������׹��-�򥻽m�ߧ@�~-�@�~7*/
/* �s�@�H�G���f�W */
/* �����ɶ��G2019/03/08 10:00*/  
#include <stdio.h> //��ܮw
#include <stdlib.h> //��ܮw 
int main(void)
{
	int n,i=1,su=0;
	do
	{
		printf("----�q�X1+2+....+n���`�M----\n"); //��� 
		printf("�п�Jn�Ȭ��G"); //��� 
		scanf("%d",&n); //��J�n�[��X 
	}
	while (n<=0); //�@���j��ٰ� 
	do 
	su+=i++; //1+2+...+n 
	while (i <= n);//�@���j���[��X 
	printf("1+2+...+%d=%d\n",n,su); //��� 
	system("pause"); //�Ȱ�����  
	return 0; //�^�ǭȬ�0   
	
}
