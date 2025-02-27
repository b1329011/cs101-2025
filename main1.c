#include <stdio.h>

int main()
{
    int i=3031;
    int a=i-1500;
    if(a<=0){
        printf("70元\n");
    }else if(a<=100){
        printf("80元\n");
    }else{
        int c=a/100;
        int r=(a%100)?1:0;
        int sum=(c+r)*10+70;
        printf("%d元\n",sum);
    }
    return 0;
}
