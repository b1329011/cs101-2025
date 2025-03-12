#include <stdio.h>
void print_sp(int i,int rows){
    for(int j=1;j<rows;j++){
        printf(" ");
    }
}//倒數第幾行要打幾個空白建
int num=1;
void print_num(int rows){
    for(int j=1;j<=rows;j++){
        printf("%d ",num);
    }
}//第幾行要打甚麼數字

int main()
{
    int rows=6;
    int n=rows;
    for(int i=1;i<=n;i++){
        print_sp(i,rows);
        print_num(i);
        printf("\n");
        rows--;
        num++;
    }
    return 0;
}
