#include<stdio.h>

int number,k,n;

void main(){
    void draw_top(),draw_bottom();
    printf("������Ҫ������ͼ����С���ô���1С��17��������ʾ��\n");
    draw_bottom();
}

void draw_top(){//���ε��ϲ���
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
