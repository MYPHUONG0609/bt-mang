#include<stdio.h>

int *bubblesort( register int a[],int n){

    for (int i=0;i<n-1;i++){
        
        for ( int j=i+1;j<n;j++){
            if (a[i]<a[j]) {
                int c=a[i];
                a[i]=a[j];
                a[j]=c;
            }
        }
    }
return a;
}


int *selection(register int a[],int n) {
    for(int i=0;i<n-1;i++){
        int min=i;
        for( int j=i+1;j< n;j++){
            if (a[j]<a[i])
            min=a[j];
        }
        if (min!=i){
            int t=a[min];
            a[min]=a[i];
            a[i]=t;
        }
    }
}