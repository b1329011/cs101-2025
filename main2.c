#include <stdio.h>
#include <ctype.h> //字元處理函式庫

int main()
{
    char a[]="A4B1C3f3";
    for(int i=0;a[i]!='\0';i++){ //直到遇到字串結尾（'\0')
        char ch = a[i];
        int count;
        if(isdigit(a[i+1])){ //判斷下一個字元是否為數字
           count=a[i+1]-'0'; //轉換字元為數字
           for(int j=0;j<count;j++){ //印出字母count次
               printf("%c",ch);
            }
           i++;
        }
    }
    printf("\n");
    return 0;
}
