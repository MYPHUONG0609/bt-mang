#include<stdio.h>
int findmax(int a[],int n){
    int max=a[0];
    for(int i=0;i<n;i++){
    if (a[i]>max)
    max=a[i];
    }
    return max;
}
int findmin(int a[],int n){
    int min=a[0];
    for(int i=0;i<n;i++){
    if(a[i]<min)
    min=a[i];
    }
    return min;
}
float average(int a[],int n){
    int sum=0;
    int k=0;
    for(int i=1;i<n;i++){
        sum=sum+a[i];
        k++;
        }
        return sum/k;
}