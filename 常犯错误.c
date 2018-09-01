#include <stdio.h>
int main()
{
    char s[]="Zhejiang";
    s[strlen(s)/2-1]=0;
    printf("%lu#%s#",strlen(s),s);
}