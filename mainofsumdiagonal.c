#include<stdio.h>
#include"header_sumodddiagonal.h"
void NhapMaTran(int a[][100], int n)
{
   for(int i = 0; i < n; i++)
      for(int j = 0; j < n; j++)
      {
         printf("A[%d][%d] = ", i, j);
         scanf("%d", &a[i][j]);
      }
}
 
void XuatMaTran(int a[][100],  int n)
{
   for(int i = 0; i < n; i++)
   {
      for(int j = 0; j < n; j++)
         printf("%d\t", a[i][j]);
      printf("\n");
   }
}


int main() {
    int n;
    int a[100][100];
    printf("nhap n");
    scanf("%d",&n);
    printf("nhap vao ma tran:\n");
    NhapMaTran(a,n);
    XuatMaTran(a,n);
    int S1=tongtrenduongcheochinh(a,n);
    int S2=tongtrenduongcheophu(a,n);
    int S=S1+S2;
    printf("tong cac so le tren hai duong cheo la %d",S);

    return 0; 
}