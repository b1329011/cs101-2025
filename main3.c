#include <stdio.h>
#include <stdlib.h>

int main()
{
   char binary[]="10001111";
   int decimal=strtol(binary,NULL,2);//字串改成數值
   printf("%X",decimal);

    return 0;
}
