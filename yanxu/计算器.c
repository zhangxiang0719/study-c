/*
	Name: 
	Copyright: 
	Author: 
	Date: 05/12/19 17:22
	Description: 
	Update:
	0.1 �����˳��� 
	0.2 �༭�˼�������
	0.3 �����˵�һ�������롣 
	0.4 �����˵ڶ����������롣
	0.5 �����˷��ŵ����롣 
	1.0 �������������㡣
	1.1 �����˴����жϡ�
	1.2 �����˴����жϵĸ�����ɫ��
	1.3 �����˳˷����㡣 
	1.4 �޸��˼�������bug�� 
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int i;
	float a,c,d;
	char b;
	printf("��������˳����밴Crtl+C��");
	for(i=1;1<=2;i--) {
		scanf("%f",&a);
		scanf("%c",&b);
		scanf("%f",&c);
		switch(b) {
			case '+':printf("%0.2f\n",a+c);break;
			case '-':printf("%0.2f\n",a-c);break;
			case '*':printf("%0.2f\n",a*c);break;
			case '/':{
				if(c==0) {
					printf("Math ERROR!\n");
					system("color 4D");
					system("color 1A");
					system("color 6F");
					system("color 07");
				}
				printf("%0.2f\n",a/c);break;
			}
			case '^':{d=pow(a,b);printf("%0.2f\n",d);}break; 
			default: {
				printf("Input ERROR!\n");
				system("color 4D");
				system("color 1A");
				system("color 6F");
				system("color 07");
			}
		}
		system("pause");
	}
	system("pause");
	return 0;
}
