#include <stdio.h>


int main(){
		int op, R, E, D, r;
		char cuadrante, cuadranteR[2],N;
do {

		do {
		printf("Conversor de notaciones: \n");
		printf("¿Que desea convertir? \n");
		printf("1) De Azimuthal a Rumbo, echado y cuadrante \n");
		printf("2) De Pinula derecha a Azimuthal\n");
		printf("3) De Rumbo Echado y cuadrante a Pinula Derecha\n");
		printf("4) Instructivo\n");
		scanf("%d", &op);
		switch (op){
			case 1:
				printf("\tAzimuthal\n ");
				printf("Ingrese dato del rumbo: \n");
				scanf("%i", &R);
				printf("Ingrese dato de la inclinacion\n");
				scanf("%i %c", &E, &cuadrante);
				if ((R>=0)&&(R<=90))
				{
					printf("El dato en notacion de rumbo echado y cuadrante es: NE %i",R);
					printf("\t%i %c\n", E, cuadrante );
						} 
				else{
					if ((R>=90)&&(R<=180)){
						(R=180-R);
						printf("El dato en notacion de rumbo echado y cuadrante es: SE %i", R);
						printf("\t%i  %c\n", E, cuadrante);
					
					}
					else{
						if((R>=180)&&(R<=270)){
							(R=R-180);
							printf("El dato en notacion de rumbo echado y cuadrante es: SW %i", R);
						printf("\t%i  %c\n", E, cuadrante);
						
						}else {
							if((R>=270)&&(R<=360)){
								(R=360-R);
								printf("El dato en notacion de rumbo echado y cuadrante es: NW %i", R);
						printf("\t%i  %c\n", E, cuadrante);
								
							}
						}
					}
					
				}
				break;
			case 2:
						printf("\tPinula derecha\n ");
				printf("Ingrese dato del rumbo: \n");

				printf("Para NE digite 1 \n");
				printf("Para SE digite 2 \n");
				printf("Para SW digite 3 \n");
				printf("Para NW digite 4 \n");
	             scanf("%i", &r);
	             if(r==1){ 
				 printf("Ingrese dato del rumbo: \n");
				scanf("%s",&cuadranteR[2]);
				scanf("%i",&R);
					printf("Ingrese dato de la inclinacion\n");
				scanf("%i", &E);
					(R=R+0);
						printf("El dato en notacion Azimuthal  es:%i", R);
						printf("\t%i SE\n", E);
						
						}
						else {
						
				if (r==2){
					printf("Ingrese dato del rumbo: \n");
				scanf("%s",&cuadranteR[2]);
				scanf("%i",&R);
					printf("Ingrese dato de la inclinacion\n");
				scanf("%i", &E);
					(R=180-R);
						printf("El dato en notacion azimuthal es:%i", R);
						printf("\t%i SW\n", E, cuadrante);
					
				}else{
					if(r==3){printf("Ingrese dato del rumbo: \n");
				scanf("%s",&cuadranteR[2]);
				scanf("%i",&R);
					printf("Ingrese dato de la inclinacion\n");
				scanf("%i", &E);
					(R=180+R);
						printf("El dato en notacion azimuthal es:%i", R);
						printf("\t%i NW\n", E, cuadrante);
					
						
					}else{
						if(r==4){printf("Ingrese dato del rumbo: \n");
				scanf("%s",&cuadranteR[2]);
				scanf("%i",&R);
					printf("Ingrese dato de la inclinacion\n");
				scanf("%i", &E);
					(R=360-R);
						printf("El dato en notacion azimuthal es:%i", R);
						printf("\t%i NW\n", E, cuadrante);
					
						}
					}
				}
			}
			break;
			case 3:
				printf("\tRumbo, echado y cuadrante\n ");
				printf("Ingrese dato del rumbo: \n");
				scanf("%s",&cuadranteR[2]);
				scanf("%i",&R);
					
					printf("Elija el cuadrante de la inclinacion \n");
 				
				printf("Para NE digite 1 \n");
				printf("Para SE digite 2 \n");
				printf("Para SW digite 3 \n");
				printf("Para NW digite 4 \n");
	             scanf("%i", &r);
	             if(r==1){ 
				printf("Ingrese dato de la inclinacion\n");
				scanf("%i %c", &E, &cuadrante);
					
						printf("El dato en notacion de Pinula Derecha  es:SE %i", R);
						printf("\t%i\n", E);
						
						}
						else {
						
				if (r==2){
				
					printf("Ingrese dato de la inclinacion\n");
				scanf("%i", &E);
				
					printf("El dato en notacion de pinula derecha es:NE %i", R);
						printf("\t%i\n", E, cuadrante);
						
				}else{
					if(r==3){
					printf("Ingrese dato de la inclinacion\n");
				scanf("%i", &E);
					
						printf("El dato en notacion pinula derecha es:SE %i", R);
						printf("\t%i\n", E, cuadrante);
						
						
					}else{
						if(r==4){
					printf("Ingrese dato de la inclinacion\n");
				scanf("%i", &E);
					
						printf("El dato en notacion pinula derecha es:NE %i", R);
						printf("\t%i\n", E, cuadrante);
						
						}
					}
				}
			}
			break;
			case 4:
			FILE *archivo;
 archivo = fopen("instructivo.txt", "r");

 if (archivo == NULL) {
 printf("Error en la apertura del archivo");
 } 
 char caracter;
 while (feof(archivo)==0){
 	caracter= fgetc(archivo);
 	printf("%c", caracter);
 	
 }
 fclose(archivo);
			}
				printf("¿Desea convertir otro dato? S/N\n");
 setbuf(stdin, NULL); 
 scanf("%c",&N);
 getchar();
 } while (N == 'S' || N == 's');
						
		} while(op !=0);
	
 
	return 0;
}

