/*题目内容：

我们认为2是第一个素数，3是第二个素数，5是第三个素数，依次类推。

现在，给定两个整数n和m，0<n<=m<=200，你的程序要计算第n个素数到第m个素数之间所有的素数的和，包括第n个素数和第m个素数。


注意：是第n个素数到第m个素数，不是n和m之间的素数！


输入格式:

两个正整数，第一个表示n，第二个表示m。


输出格式：

一个整数，表示第n个素数到第m个素数之间所有的素数的和，包括第n个素数和第m个素数。


输入样例：

2 4



输出样例：

15*/
#include <stdio.h>
int main(){
	int n,m,i,sum,t,isPrime;
	int sumn,summ;
	sum = 0;
	scanf("%d %d",&n,&m);
	int count = 0;
		for(i=2;count<=m;i++){
			isPrime = 1;
			for(t=2;t<i;t++){
				if(i%t==0){
					isPrime = 0;
				}
			}
			if(isPrime==1){
				count++;
				sum += i;
			}
			if(count == n-1)
			sumn = sum;
			if(count == m)
			summ = sum;
		}
	printf("%d",summ-sumn);
	return 0;
}
