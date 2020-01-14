#include<stdio.h>
#include<math.h>
int Giaithua(float x, int n){
    if (n==0)
    return 0;
    return 2*n+Giaithua(x,n-1);
}
float Tinh_mu(float x, int n){
    if (n==0)
    return 1;
    return pow(x,2*n)+Tinh_mu(x,n-1);
}
float Cosx(float x, int n){
    if (n==0)
    return 1;
    return (pow(-1,n)*(Tinh_mu(x,n)/Giaithua(x,n)))+Cosx(x,n-1);
}
int main (){
    int n;
    float x;
    printf("Nhap n:");
    scanf("%d",&n);
    printf("Nhap x:");
    scanf("%f",&x);
    printf("Cosx cua %f la %f",x,Cosx(x,n));
    return 0;
}