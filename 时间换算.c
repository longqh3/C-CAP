#include <stdio.h>
int main(){
	int utc,bjt;
	scanf("%d",&bjt);
	int h,m,sm,utcm;
	h = bjt / 100;
	m = bjt % 100;
	sm = h * 60 + m;
	utcm = sm - 8 * 60;
	if(utcm >= 0 ){
		utc = utcm/60*100 + utcm%60;
		printf("%d",utc);
	}else{
		utcm += 24*60;
		utc = utcm/60*100 + utcm%60;
		printf("%d",utc);
	}
	return 0;
}
