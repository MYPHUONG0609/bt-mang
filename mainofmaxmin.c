#include<stdio.h>
#define MAX 100
#include"maxmin.h"
void Nhapmang(int a[],int n){
     printf("Nhap n:");
scanf("%d",&n);
for(int i=0;i<n;i++){
printf("Phan tu thu a[%d]:\t",i+1);
scanf("%d",&a[i]);
}

}
void Xuatmang(int a[],int n)
{
printf("Noi dung cua mang la:\n");
for(int i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}
int main(){
    int a[MAX],n;
    Nhapmang(a,n);
    Xuatmang(a,n);
    int max=findmax(a,n);
    int min=findmin(a,n);
    float average=findaverage(a,n);
    printf("so lon nhat trong mang la %d",max);
    printf("so nho nhat trong mang la %d",min);
    printf("gia tri trung binh cua mang la %f",average);
    return 0;
}
