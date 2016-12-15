#include <stdio.h>
#include <stdlib.h>
#include<math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float prest, interes,amort;
	int mes,meses=1;
	printf("Introduzca cantidad a pagar: ");
	scanf("%f",&prest);
	printf ("\nIntroduzca meses a pagar: ");
	scanf ("%i",&mes); 
	printf ("\nIntroduzca porcentaje de interes anual: " );
	scanf ("%f",&interes);
	printf("\n");
	interes=(interes*1/12*0.01); 
	amort=(prest*interes)/(1+(-pow(1+interes,-mes))); 
	printf("mes\tAmortizacion\tInteres\t  Abono\t     Saldo insoluto\t\n"); 
	printf(" 0\t\t\t\t\t\t%.2f \n",prest);
	while(mes>0){
		printf(" %i\t",meses); 
		printf("%.2f\t\t",(amort+(-(prest*interes)))); 
		printf("%.2f\t  ",prest*interes); 
		printf("%.2f\t",amort); 
		prest=prest+(-(amort+(-(prest*interes)))); 
		printf("%.2f\t",prest);
		printf("\n");
		mes=mes+(-1);
		meses=meses+1;	
	}	
	return 0;
}

float SN(float inte, int mes) { //formula para saldo insoluto
	inte=(1-(pow(1+inte,-mes)));
	return inte;
}
