#include <stdio.h>
#include <string.h>

int main()
{
   char str[]="Hello";
   int left=0,right=strlen(str)-1;//字串長度-1為最右側字元
   while(left<right){
       char a=str[left];
       str[left]=str[right];//先將左邊的字元站存變數後將右邊字元改到左邊
       str[right]=a;
       left++;
       right--;
   }
   printf("%s",str);
    return 0;
}
