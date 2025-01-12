//bismillah
#include <stdio.h>


int a,b,k;//matris boyutlrı değiskenleri
int main(){
//matris boyutlrı iCin girdi istenmesi
printf("goruntu matrisi boyutlari (axb):\n");
scanf("%d",&a);
scanf("%d",&b);
printf("filtre matrisi boyutlari (kxk):");
scanf("%d",&k);
//matrislerin tanımlanması
int goruntu_matrisi[a][b];
int filtre_matrisi[k][k];
int sonuc_matris[a-k+1][b-k+1];
int i,j,y,u,t,m,r;


	//G matrisi değerlerinin istenmesi
	for(i=0;i<a;i++){
	printf("goruntu matrisi %d. satir degerleri\n",i+1);
	for(j=0;j<b;j++){
		scanf("%d",&goruntu_matrisi[i][j]);
		}
	}

	//F matrisi değerlerinin istenmesi
	 for(i=0;i<k;i++){
	printf("filtre matrisi %d. satir degerleri\n",i+1);
	for(j=0;j<k;j++){
		scanf("%d",&filtre_matrisi[i][j]);
		}
	}

	 //filtre matrisi elemanlarının toplamının (t) hesaplanması
	 t=0;
	 for(i=0;i<k;i++){
	 	for(j=0;j<k;j++){
	 		t=t+(filtre_matrisi[i][j]);
		 } 	
	 }
	  
	  
	//filtre işleminin yapılması
	for(y=0;y<(a-k+1);y++){
		for(u=0;u<(b-k+1);u++){
					m=0;
					for(i=0;i<k;i++){
						for(j=0;j<k;j++){
							m=m+goruntu_matrisi[i+y][j+u]*filtre_matrisi[i][j];
								}
							}
					r=m/t;
					sonuc_matris[y][u]=r;
				}
			}
					


	//G matrisinin yazdırılması
 	printf("\ngoruntu matrisi:");
 	for (i=0;i<a;i++){
 		printf("\n");
 		for(j=0;j<b;j++){
 			printf("%d ",goruntu_matrisi[i][j]);
 			
		 }
	 }
	 
	//F matrisinin yazdırılması
	printf("\n\nfiltre matrisi:");
	 for (i=0;i<k;i++){
 		printf("\n");
 		for(j=0;j<k;j++){
 			printf("%d ",filtre_matrisi[i][j]);
		 }
	 }
	
	//sonuc matrisinin yazdırılması
	 printf("\n\nsonuc matrisi:");
	 for (y=0;y<a-k+1;y++){
 		printf("\n");
 		for(u=0;u<b-k+1;u++){
 			printf("%d ",sonuc_matris[y][u]);	
		 }
	 }
	
	 
	 
}



