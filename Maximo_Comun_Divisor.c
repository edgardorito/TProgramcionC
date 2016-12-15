#include <stdlib.h>
#include <stdio.h>
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
			while(Num2 != 0) { 
    		   resto=Num1%Num2; 
    		   Num1=Num2; 
    		   Num2=resto; 
			} 
			printf("EL MCD ES: %d", Num1); 
		}
}
