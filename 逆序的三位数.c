#include <stdio.h>
int main(){
	int x,digit,ret;
	ret = 0;
//	printf("请输入要逆序的数字：\n");
	scanf("%d",&x);
	do{
		digit = x % 10;
		x /= 10;
		ret = ret * 10 + digit;
	}while(x > 0);
	printf("%d",ret);
	return 0;
}
