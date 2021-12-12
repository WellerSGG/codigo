#include<stdio.h>

int main(){


	int num[7], md[7], mt[7];
	
	printf("Digite 7 numeros inteiros: ");
	for(int i=0; i<7; i++){
		scanf("%d", &num[i]);
		md[i]=0;
		mt[i]=0;
	} for(int i=0; i<7; i++){
			if(num[i]%2==0){
			
			md[i] = num[i];
			
		} 	if (num[i]%3==0){
			
			mt[i] = num[i];
		}
	}
		printf("\nMultiplos de 2: \n");
		for(int i=0; i<7; i++){
			if(md[i]!=0)
				printf("%i\n", md[i]);
		}
		printf("\nMultiplos de 3: \n");
		for(int i=0; i<7; i++){
			if(mt[i]!=0)
				printf("%i\n", mt[i]);
		}
		return 0;
			

}
	
