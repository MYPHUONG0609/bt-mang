#include<stdio.h>
#include<math.h>
int test_square(int n){
  if(n == sqrt(n) * sqrt(n))
  return 1;
else
return 0;
}
int  *display_square(int a[],int n){
    for(int i=0;i<n;i++){
        if(test_square(a[i]=1)){
            printf("a[%d]=%d",i,a[i]);
            }
            }
            return a;
}