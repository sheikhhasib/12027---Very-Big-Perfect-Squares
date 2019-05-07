#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char str[1005];
    while(scanf("%s",str)==1)
    {
        if(!strcmp(str,"0"))
            break;
        int lenth = strlen(str);
        int numb = str[0]-'0',i;
        if(lenth>1 && lenth % 2 == 0) numb = numb*10+str[1]-'0';
        lenth = (lenth - 1)/2;
        printf("%d",(int)sqrt(numb));
        for(i=0;i<lenth;i++)
            putchar('0');
        puts("");
    }
    return  0;
}
