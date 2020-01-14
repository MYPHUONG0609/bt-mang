#include<stdio.h>
#include<math.h>
int Giaithua(float x, int n){
    if (n==0)
    return 1;
    return (2*n+1)+Giaithua(x,n-1);
}
float Tinh_mu(float x, int n){
    if (n==0)
    return x;
    return pow(x,2*n+1)+Tinh_mu(x,n-1);
}
float Sinx(float x, int n){
    if (n==0)
    return x;
    return (pow(-1,n)*(Tinh_mu(x,n)/Giaithua(x,n)))+Sinx(x,n-1);
}
int main (){
    int n;
    float x;
    printf("Nhap n:");
    scanf("%d",&n);
    printf("Nhap x:");
    scanf("%f",&x);
    printf("Sinx cua %f la %f",x,Sinx(x,n));
    return 0;
}