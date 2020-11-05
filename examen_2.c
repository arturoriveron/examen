#include <stdio.h>
int main(){
	
	float a;
	printf("introdusca su sueldo\n");
	scanf("%f",&a);
	
	if(a<10000){
		printf("el impuesto que se le descontara respecto a su sueldo es del cinco por ciento\n");
		printf("su ingreso es de: %.3f\n",a);
		printf("el ingreso menos su impuesto es de:%.3f",a*.95);
	}
	else{
		if(a>1000,a<15000){
		printf("el impuesto que se le descontara respecto a su sueldo es del diez por ciento\n");
		printf("su ingreso es de: %.3f\n",a);
		printf("el ingreso menos su impuesto es de:%.3f",a*.90);
	}
	else{
		
		if(a>1500,a<20000){
		printf("el impuesto que se le descontara respecto a su sueldo es del quince por ciento\n");
		printf("su ingreso es de: %.3f\n",a);
		printf("el ingreso menos su impuesto es de:%.3f",a*.85);
		}
		else{
		if(a>20000){
		printf("el impuesto que se le descontara respecto a su sueldo es del dieciocho por ciento\n");
		printf("su ingreso es de: %.3f\n",a);
		printf("el ingreso menos su impuesto es de:%.3f\n",a*.82);
	}
	
	}
		
    	
}
}
}
