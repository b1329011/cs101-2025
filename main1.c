#include <stdio.h>
#include <string.h>

int main()
{
    char a[]="AABBBCCCCdd";
    int len = strlen(a); //字串長度
    for(int i=0;i<len;i++){
        int count=1; //字母至少出現一次
        while(i+1<len && a[i]==a[i+1]){
            count++;
            i++;
        }
        printf("%c%d",a[i],count);
    }
    printf("\n");
    return 0;
}
