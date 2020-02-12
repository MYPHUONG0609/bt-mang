
#include<stdio.h>
int **SpiralPrint( int **a,int dong,int cot) {
	int k=1,p=0,i,j;
   while(k <= dong*cot){
		for(i = p; i < cot; i++) 
			a[p][i] = k++;
		for(i = p+1; i < dong; i++) 
			a[i][cot-1] = k++;
		if ( p != dong-1){
			for(i = cot-2; i >=p; i--)
				a[dong-1][i] = k++;
		}	
		if(p!=cot-1){
			for(i = dong-2; i > p; i--) 
				a[i][p] = k++;
		}	
		p++;dong --; cot --;
	}
	return a;
}
   

   
