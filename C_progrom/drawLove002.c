#include<stdio.h>

int number,k,n;

void main(){
    void draw_top(),draw_bottom();
    printf("please input an int to Love's size(from 2 to 18)\n");
    scanf("%d",&number);
    k = number;
    n = 3*(k/2);
    draw_top();
    draw_bottom();
}

void draw_top(){
    for(;k>0;k--,n+=2){
        for(int i=k;i>0;i--)
            printf("%c",0);
        for(int i=n;i>0;i--)
            printf("%c",42);
        for(int i=k;i>0;i--)
            printf("%c",0);
        for(int i=k;i>0;i--)
            printf("%c",0);
        for(int i=n;i>0;i--)
            printf("%c",42);
        for(int i=k;i>0;i--)
            printf("%c",0);
        printf("\n");
        }
}

void draw_bottom(){
    int a = 2*(n+k);
    int b = 0;
    for(;a>0;a-=2,b++){
        for(int i=b;i>0;i--)
            printf("%c",0);
        for(int i=a;i>0;i--)
            printf("%c",42);
        for(int i=b;i>0;i--)
            printf("%c",0);
        printf("\n");
    }
}

