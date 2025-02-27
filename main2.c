#include <stdio.h>

int main()
{
   int i=12345;
   int f;
   int l=f=i%10;
   while (i>=10){
       i/=10;
       f=i%10;
   }
   printf("first%d+last%d=%d",f,l,f+l);
    return 0;
}
