/*题目内容：

一个多项式可以表达为x的各次幂与系数乘积的和，比如：

    2x6+3x5+12x3+6x+20

现在，你的程序要读入两个多项式，然后输出这两个多项式的和，也就是把对应的幂上的系数相加然后输出。

程序要处理的幂最大为100。


输入格式:

总共要输入两个多项式，每个多项式的输入格式如下：

每行输入两个数字，第一个表示幂次，第二个表示该幂次的系数，所有的系数都是整数。第一行一定是最高幂，最后一行一定是0次幂。

注意第一行和最后一行之间不一定按照幂次降低顺序排列；如果某个幂次的系数为0，就不出现在输入数据中了；0次幂的系数为0时还是会出现在输入数据中。


输出格式：

从最高幂开始依次降到0幂，如：

2x6+3x5+12x3-6x+20

注意其中的x是小写字母x，而且所有的符号之间都没有空格，如果某个幂的系数为0则不需要有那项。


输入样例：

6 2

5 3

3 12

1 6

0 20

6 2

5 3

2 12

1 6

0 20


输出样例：

4x6+6x5+12x3+12x2+12x+40*/
#include <stdio.h>
void ini(int a,int b);

int main()
{
	const int num = 101;
	int x,i;
	int a[num];
	int j,h;
	for(j=0;j<num;j++){
		a[j] = 0;
	}
	for(h=0;h<2;h++){
		do{
			scanf("%d %d",&x,&i);
			a[x] = a[x] + i;
		}while(x);
	}
	
//	for(j=0;j<num;j++){
//		printf("%d",a[j]);
//	}
	
	int t;
	int count=0;
	
	for(t=num-1;t>1;t--){
		if(a[t] != 0){
			count++;
			if(count == 1){
				if(a[t] == 1){
					printf("x%d",t);
				}else if(a[t] == -1){
					printf("-x%d",t);
				}else{
					printf("%dx%d",a[t],t);
				}
			}else{
				ini(a[t],t);
			}
		}
	}

	if(a[1] != 0){
		if(a[1]>0){
			if(a[1] == 1){
				printf("+x",a[1]);
			}else{
				printf("+%dx",a[1]);
			}
		}else{
			printf("-%dx",-a[1]);
		}	
	}
	
	if(a[0] > 0){
		printf("+%d",a[0]);
	}else if(a[0] < 0){
		printf("-%d",-a[0]);
	}else{
		printf("0");
	}
	return 0;
}

void ini(int a,int b){
	if(a == 1){
		printf("+x%d",b);
	}else if(a == -1){
		printf("-x%d",b);
	}else if(a > 0){
		printf("+%dx%d",a,b);
	}else{
		printf("%dx%d",a,b);
	}
}
