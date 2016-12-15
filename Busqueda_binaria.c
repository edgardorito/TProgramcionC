#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int BusquedaBinaria (const int datos[],int tam, int n);

int datos[10]={0,2,8,10,46,98,106,740,950,1000};
int n;
int	Nbus;
int main (){
	printf("Ingrese el numero a buscar: ");
	scanf(" %i", &n);
	clock_t start = clock();
	Nbus= BusquedaBinaria(datos,10,n);
	if (Nbus==-1){
		printf("\nEl numero no se encuentra");
	}
	else{
		printf("\nEl numero se encuentra");
	}
	printf("\n\nTiempo transcurrido: %f", ((double)clock() - start) / CLOCKS_PER_SEC);
}

int BusquedaBinaria (const int datos[],int tam, int n){
	int arriba = tam-1;
	int abajo = 0;
	int centro;
	while (abajo <= arriba){
    	centro = (arriba + abajo)/2;
		if (datos[centro] == n){
			return centro;
		}
		else
 			if (n < datos[centro]){
   				arriba=centro-1;
   			}
 			else{
   				abajo=centro+1;
   			}	
	}
	return -1;    
}
