
#include<stdio.h>
int **SpiralPrint( int **a,int dong,int cot) {
 int i, daudong = 0, daucot = 0; 
   while (daudong < dong && daucot< cot) { 
        for (i = daucot; i < cot; ++i) { 
            printf("%d ", a[k][i]); 
        } 
        k++; 
  
        for (i = daudong; i < dong; ++i) { 
            printf("%d ", a[i][n - 1]); 
        } 
        n--; 
  
       
        if (daudong < dong) { 
            for (i = n - 1; i >= l; --i) { 
               printf("%d ", a[m - 1][i]); 
            } 
            m--; 
        } 
	
        if (daucot < n) { 
            for (i = dong - 1; i >= daudong; --i) { 
                printf("%d ", a[i][l]); 
            } 
            daucot++; 
        } 
    } 
	return a;
}
   

   
