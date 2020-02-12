
#include<stdio.h>
int **SpiralPrint( int **a,int dong,int cot) {
 int i, daudong = 0, daucot = 0; 
   while (daudong < dong && daucot< cot) { 
        for (i = daucot; i < cot; ++i) { 
            printf("%d ", a[daudong][daucot]); 
        } 
        daudong++; 
  
        for (i = daudong; i < dong; ++i) { 
            printf("%d ", a[i][cot - 1]); 
        } 
        cot--; 
  
       
        if (daudong < dong) { 
            for (i = cot - 1; i >= daucot; --i) { 
               printf("%d ", a[dong - 1][i]); 
            } 
            dong--; 
        } 
	
        if (daucot < cot) { 
            for (i = dong - 1; i >= daudong; --i) { 
                printf("%d ", a[i][daucot]); 
            } 
            daucot++; 
        } 
    } 
	return a;
}
   

   
