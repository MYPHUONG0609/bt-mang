#include<stdio.h>
#define MAX 100
#include"header_so_am.h"
void nhap (float a[], int n) {
for (int i=1; i<=n;i++) {
printf("\nNhap phan tu a[%d]:",i);
scanf("%d",&a[i]);
}
}

void xuat (float a[],int n) {
    for (int i=1;i<=n;i++) {
        printf("%4d\n",a[i]);
    }
}
int main(){
    int n;
    float a[MAX];
   
    printf("nhap n");
    scanf("%d",&n);
    printf("nhap mang");
    nhap(a,n);
    printf("xuat mang\n");
    xuat(a,n);
    float *display=display_so_am(a,n);
    printf("so am trong mang la",*display);
}