#include<stdio.h>

int main(){
	
	float peso_payaso=.150 , peso_juego_mesa=.170, costo_payaso=200, costo_juego_mesa=180;
	
	float payaso;
	printf("introdusca la cantidad de payasos\n:");
	scanf("%f",&payaso);
	
	float juego_mesa;
    printf("inserte la cantidad de juegos de mesa\n:");
	scanf("%f",&juego_mesa);
	
	float preciomesa=costo_juego_mesa*juego_mesa;
	float preciopayaso=costo_payaso*payaso;
	float peso_total_payaso=payaso*peso_payaso;
	float peso_total_mesa=juego_mesa*peso_juego_mesa;
	
	float peso_total_global=peso_total_payaso+peso_total_mesa;
	printf("precio por los 'payasos': $%.2f pesos\n",preciopayaso);
	printf("precio por los 'juegos de mesa': $ %.2f pesos\n",preciomesa);
	
	float pago_total=preciopayaso+preciomesa;
	printf("pago 'sin envio' : $%.2f pesos\n",pago_total);
	printf("el peso total es de :%.2fkg\n",peso_total_global);
	
	float exceso=(peso_total_global-10)*200+2000;
	int envio= 2000;
	float ahorasitodo=envio+pago_total;
	if(peso_total_global<10.0){
		printf("el precio total mas envio: $%.2f pesos\n",ahorasitodo);
	}
	else{
		printf("exceso de peso\n");
		printf("el pago total es de: $%f\n",exceso+pago_total);
		printf("gracias por preferirnos su entrega sera realizada \ncuando saque 10 en programación");
	}
	
	
	

     
	
	
}
