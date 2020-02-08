#include<stdio.h>
int **SpiralPrint( int a[][100],int m,int n) {
    int i, dauhang = 0, daucot = 0; 
    while (dauhang < m && daucot < n) { 
		for (i = dauhang; i < n; ++i) { 
			printf("%d ", a[dauhang][i]); 
		} 
		dauhang++; 
        for (i = dauhang; i < m; ++i) { 
			printf("%d ", a[i][n - 1]); 
		} 
		n--; 
        if (dauhang < m) { 
			for (i = n - 1; i >= daucot; --i) { 
				printf("%d ", a[m - 1][i]); 
			} 
			m--; 
		} 
        if (daucot < n) { 
			for (i = m - 1; i >= dauhang; --i) { 
				printf("%d ", a[i][daucot]); 
			} 
			daucot++; 
		} 
	}
	return a;
} 
   
