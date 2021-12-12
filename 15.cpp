#include<stdio.h>

int main() {
	
	int num[6], par=0, im=0, pares[6], impares[6];
	
	printf("Digite 6 números inteiros: \n");
	for(int i=0; i<6; i++){
		scanf("%i", &num[i]);
		impares[i]=0;;
		pares[i]=0;
	}
	for(int i=0; i<6; i++){
			if(num[i]%2==0){
			
			pares[i] = num[i];
			par = par +1;
		} 
		if (num[i]%2!=0){
			
			impares[i] = num[i];
			im = im + 1;
	}
	}
		printf("\nPares: \n");
		for(int i=0; i<6; i++){
			if(pares[i]!=0)
				printf("%i\n", pares[i]);
		}
		printf("\nÍmpares: \n");
		for(int i=0; i<6; i++){
			if(impares[i]!=0)
				printf("%i\n", impares[i]);
		}
		printf("\ nTotal de pares: %d\n Total de ímpares: %d", par, im);
		return 0;
		
		
}
		
	
