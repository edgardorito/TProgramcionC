#include <stdlib.h>
#include <stdio.h>
int MCD_Recursivo (int N1, int );
int resto=0, Num1, Num2;
int main(){
		printf("\nIntroduzca el primer numero numero: "); 
		scanf("%d",&Num1); 
		printf("\nIntroduzca el segundo numero numero: "); 
		scanf("%d",&Num2); 
		
		if(Num1==Num2){
			printf("EL MCD ES: %d", Num1); 
		}
		else{
			
			printf("EL MCD ES: %d", MCD_Recursivo (Num1, Num2)); 
		}
}

int MCD_Recursivo (int N1, int N2){
	if(N2==0){
		return N1;
	}
	else{
		return MCD_Recursivo ( N2, N1 % N2);
	}
}


