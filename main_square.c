#include<stdio.h>
#include<math.h>
#define MAX 100
#include"headerofsquare.h"
void nhap(int a[],int n){
    for(int i=0;i<n;i++){
        printf("Nhap phan tu thu a[%d]",i+1);
        scanf("%d",&a[i]);
    }
}
void xuat(int a[],int n){
    for (int i=0;i<n;i++){
        printf("mang la %d \n",a[i]);
    }
}
int main(){
    int a[MAX] , n;
    printf("Nhap n");
    scanf("%d",&n);
    printf("nhap mang");
    nhap(a,n);
    printf("xuat mang");
    xuat(a,n);
    int *display=display_square(a,n);
    printf("so chinh phuong trong mang la %d",*display);
    return 0;



}