#include <stdio.h>
#include <stdlib.h>
int TAM=10;
int BusquedaBinaria (int datos[TAM],int tam, int n);

int datos[10]={0,2,8,10,46,98,106,740,950,1000};
int n,i;
int	Nbus;
int main (){
	printf("Ingrese el numero a buscar: ");
	scanf(" %i", &n);
	Nbus= BusquedaBinaria(datos,TAM,n);
	if (Nbus==-1){
		printf("\nEl numero no se encuentra");
	}
	else{
		printf("\nEl numero se encuentra");
	}
}

int BusquedaBinaria (int datos[],int TAM, int n){
	return BusquedaBinaria_Recursiva(datos, 0, TAM-1, n);
}

int BusquedaBinaria_Recursiva (int datos[], int izquierda, int derecha, int n){
	int centro;
	if (izquierda <= derecha){
    	centro = (derecha + izquierda)/2;
		if (datos[centro] == n){
			return centro;
		}
		else
 			if (n > (datos[centro])){
   				return BusquedaBinaria_Recursiva (datos,centro+1,derecha,n); 
   			}
 			else{
   				return BusquedaBinaria_Recursiva (datos,izquierda,centro-1,n);; 
   			}
	}
	else{
		return -1;
	}
}
