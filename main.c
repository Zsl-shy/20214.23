#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu(){
	printf("*************************************\n");
	printf("**********1.play     0.exit**********\n");
	printf("*************************************\n");
}

void game(){
//	生成随机数 
//	时间戳概念 
	int ret=0;
	int guess=0;
//	srand((unsigned int)time(NULL));拿时间戳来设置随机数的生成起始点，并且这条语句放到主函数里就好，只需执行一次 
	ret=rand()%101; 

//	猜数字 
	printf("请猜数字:\n");
	while(1){
		scanf("%d",&guess);
		if(guess>ret){
			printf("大了\n");
		}
		else{
			if(guess<ret){
				printf("小了\n");
			}
			else{
				printf("猜对了\n");
				break;
			}
		}
	}
}

int main() {
	int input=0;
	srand((unsigned int)time(NULL));
	do{
		menu();
		printf("请选择>:");
		scanf("%d",&input);
		switch(input){
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			defaulf:
				printf("选择错误\n");
				break;
		}
		printf("\n");
	}while(input);
	return 0;
}
