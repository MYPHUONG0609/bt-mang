#include<stdio.h>
#define MAX 100
#include"headerofodd.h"
void nhap (int a[], int n) {
for (int i=1; i<=n;i++) {
printf("\nNhap phan tu a[%d]:",i);
scanf("%d",&a[i]);
}
}

void xuat (int  a[],int n) {
    for (int i=1;i<=n;i++) {
        printf("%4d\n",a[i]);
    }
}
int main() {
    int n;
    int a[MAX];
   
    printf("nhap n");
    scanf("%d",&n);
    printf("nhap mang");
    nhap(a,n);
    printf("xuat mang\n");
    xuat(a,n);
    int display=sumodd(a,n);
    printf("sum of odd numbers is %d ",display);
    return 0;

}