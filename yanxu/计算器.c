/*
	Name: 
	Copyright: 
	Author: 
	Date: 05/12/19 17:22
	Description: 
	Update:
	0.1 创建了程序。 
	0.2 编辑了计算器。
	0.3 加入了第一个的输入。 
	0.4 加入了第二个数的输入。
	0.5 加入了符号的输入。 
	1.0 加入了四则运算。
	1.1 加入了错误判断。
	1.2 加入了错误判断的更改颜色。
	1.3 加入了乘方运算。 
	1.4 修改了计算错误的bug。 
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int i;
	float a,c,d;
	char b;
	printf("如果你想退出，请按Crtl+C。");
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
