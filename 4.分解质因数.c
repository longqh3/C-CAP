/*
分解质因数（10分）

题目内容：

每个非素数（合数）都可以写成几个素数（也可称为质数）相乘的形式，这几个素数就都叫做这个合数的质因数。比如，6可以被分解为2x3，而24可以被分解为2x2x2x3。


现在，你的程序要读入一个[2,100000]范围内的整数，然后输出它的质因数分解式；当读到的就是素数时，输出它本身。


输入格式:

一个整数，范围在[2,100000]内。


输出格式：

形如：

n=axbxcxd

或

n=n

所有的符号之间都没有空格，x是小写字母x。


输入样例：

18


输出样例：

18=2x3x3*/
#include <stdio.h>

int div(int a);

int main(){
	int inte,i,t;
	scanf("%d",&inte);
	printf("%d=",inte);
	i = inte;
	t = div(i);
	while(div(i) != 1){
		t = i / div(i);
		printf("%dx",t);
		i = div(i);
	}
	printf("%d",i);
}

int div(int a){
	int i;
	for(i=2;i<=a;i++){
		if(a % i == 0){
			break;
		}		
	}
	return (a/i);
}
