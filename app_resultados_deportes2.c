#include<stdio.h>
#include <conio.h>
#include <string.h> 
struct datos{
	char usuario[500];
	char contrasena[500];
	char anotadores[500];
	char asistentes[500];
	char clasificacion[500];
	char proxJornada[500];
		
};
int main(){
	FILE * pf;
	struct datos futbol[50];
	struct datos baloncesto[50];
	struct datos inicioSesion[50];
	int opcion, eleccion1, eleccion2, inicio;
	char volver[100];
	char usuarioycontrasena[100];
	int contador;
	int resultado;
	int i, j;
	
	
	printf("     AAA        PPPPPPPP     PPPPPPPP   \n");
	printf("    AA AA       PPP    PP    PPP    PP  \n");
	printf("   AA   AA      PPP    PP    PPP    PP  \n");
	printf("  AAAAAAAAA     PPPPPPP      PPPPPPP    \n");
	printf(" AA       AA    PPP          PPP        \n");
	printf("AA         AA   PPP          PPP        \n");
	printf("---------------------------------------------------------\n");
	
	do{ 
		contador=0;
		printf("Pulse 1 para iniciar sesion.\n");
		printf("Pulse 2 para registrarse.\n");
		scanf("%d", &inicio);
		switch(inicio){
			case 1:
				do{
					contador=0;
					printf("Introduzca el usuario y la contrasena con un guion entre medias.\n");
					fflush(stdin);
					gets(usuarioycontrasena);
					
					pf=fopen("usuarios.txt","r");
					if(pf==NULL){
						printf("Fichero no encontrado");
						return 0;
					}
					while(fscanf(pf,"%s",inicioSesion[contador].usuario)!=EOF){
						contador++;
					}
					fclose(pf);
					
					for(i=0;i<contador;i++){
						j=0;
						while(usuarioycontrasena[j] !='\0' && inicioSesion[i].usuario[j]!='\0'){
							if(usuarioycontrasena[j]==inicioSesion[i].usuario[j]){
								resultado=1;
							}else {
								resultado=0;
								break;
							}
							j++;
						}
						if(resultado==1){
							break;
						}
					}
					if(resultado==0){
						printf("Usuario o contrasena erroneos.\n");
					}										
				}while(resultado==0);
				break;
			case 2:
				printf("Introduzca el usuario y la contrasena con un guion entre medias.\n");
				fflush(stdin);
				gets(usuarioycontrasena);
				
				pf=fopen("usuarios.txt","a");
				if(pf==NULL){
					printf("Fichero no encontrado");
					return 0;
				}
				fprintf(pf,"\n%s",usuarioycontrasena);
				fclose(pf);	
				break;
			default:
				printf("Numero erroneo\n.");
				break;		
		}
	}while(inicio>2);
	
	
	do{
		system ("cls");
		printf("     AAA        PPPPPPPP     PPPPPPPP   \n");
		printf("    AA AA       PPP    PP    PPP    PP  \n");
		printf("   AA   AA      PPP    PP    PPP    PP  \n");
		printf("  AAAAAAAAA     PPPPPPP      PPPPPPP    \n");
		printf(" AA       AA    PPP          PPP        \n");
		printf("AA         AA   PPP          PPP        \n");
		printf("---------------------------------------------------------\n");
		printf("MARCADORES Y RESULTADOS\n\n");
		
		printf("1. Futbol\n");
		
		printf("2. Baloncesto\n");
		
		printf("\n");
		
		printf("3. Salir\n");
		
		scanf("%d", &opcion);
		
		
		switch(opcion){
			case 1:
				system("cls");
				printf(" 1. La Liga Santander\n");
				printf(" 2. Premier League\n");
				printf(" 3. Bundesliga\n");
				printf(" 4. Ligue 1\n");
				printf(" 5. Serie A\n");
				printf(" 6. Champions League\n");
				printf("\n");
				printf(" 7. Volver al menu principal\n");
				scanf("%d",&eleccion1);
				     switch(eleccion1){
				     	      case 1:
				     	      	system("cls");
				     	      	printf("\nLALIGA SANTANDER\n \n");
				     	      	printf("Escoja los datos que quiera ver:\n");
				     	      	printf(" 1. Maximos goleadores\n \n");
				     	      	printf(" 2. Maximos asistentes\n \n");
				     	      	printf(" 3. Clasificacion\n \n");
				     	      	printf(" 4. Siguiente jornada\n \n");
				     	      	scanf("%d", &eleccion2);
				     	   		switch(eleccion2){
				     	   			case 1:
										pf= fopen("laligagoles.txt", "r");
										if (pf== NULL){
											printf("No se encuentra el fichero\n");
											return 0;
										}
										while(fscanf(pf,"%s", futbol[eleccion2-1].anotadores) != EOF) {
											printf("%s\n", futbol[eleccion2-1].anotadores);
										}
										fclose(pf);
										printf("\nPulse cualquier letra para volver al menu \n");
										fflush(stdin);
										scanf("%c", &volver);
										break;
									case 2:
								    	pf=fopen("laligaasistencias.txt","r");
								    	if(pf==NULL){
									    	printf("No se ha podidio abrir el fichero\n");
									    	return 0;	
										}
										while(fscanf(pf,"%s",futbol[eleccion2-1].asistentes)!=EOF){
											printf("%s\n",futbol[eleccion2-1].asistentes);	
										}
										fclose(pf);
										printf("\nPulse cualquier letra para voler al menu\n");
										fflush(stdin);
										scanf("%c", &volver);
										break;
									case 3:
										pf=fopen("laligaclasificacion.txt","r");
								    	if(pf==NULL){
									    	printf("No se ha podidio abrir el fichero\n");
									    	return 0;	
										}
										while(fscanf(pf,"%s",futbol[eleccion2-1].clasificacion)!=EOF) {
											printf("%s\n",futbol[eleccion2-1].clasificacion);	
										}
										fclose(pf);
										printf("\nPulse cualquier letra para volver al menu\n");
										fflush(stdin);
										scanf("%c", &volver);
										break;
									case 4:
										pf=fopen("laligajornada.txt","r");
								    	if(pf==NULL){
									    	printf("No se ha podidio abrir el fichero\n");
									    	return 0;	
										}
										while(fscanf(pf,"%s",futbol[eleccion2-1].proxJornada)!=EOF) {
											printf("%s\n",futbol[eleccion2-1].proxJornada);	
										}
										fclose(pf);
										printf("\nPulse cualquier letra para volver al menu\n");
										fflush(stdin);
										scanf("%c", &volver);
										break;
									default:
										printf("Numero no valido\n");
										break;																	     	      				
								   }
				     	      	break;
				     	      case 2:
				     	      	system("cls");
				     	      	printf("\nPREMIER LEAGUE\n \n");
				     	      	printf("Escoja los datos que quiera ver:\n");
				     	      	printf(" 1. Maximos goleadores\n \n");
				     	      	printf(" 2. Maximos asistentes\n \n");
				     	      	printf(" 3. Clasificacion\n \n");
				     	      	printf(" 4. Siguiente jornada\n \n");
				     	      	fflush(stdin);
				     	      	scanf("%d", &eleccion2);
				     	      	switch(eleccion2){
				     	   			case 1:
										pf= fopen("premiergoles.txt", "r");
										if (pf== NULL){
											printf("No se encuentra el fichero\n");
											return 0;
										}
										while(fscanf(pf,"%s", futbol[eleccion2].anotadores) != EOF) {
											printf("%s\n", futbol[eleccion2].anotadores);
										}
										fclose(pf);
										printf("\nPulse cualquier letra para volver al menu \n");
										fflush(stdin);
										scanf("%c", &volver);
										break;
									case 2:
								    	pf=fopen("premierasistencias.txt","r");
								    	if(pf==NULL){
									    	printf("No se ha podidio abrir el fichero\n");
									    	return 0;	
										}
										while(fscanf(pf,"%s",futbol[eleccion2-1].asistentes)!=EOF){
											printf("%s\n",futbol[eleccion2-1].asistentes);	
										}
										fclose(pf);
										printf("\nPulse cualquier letra para voler al menu\n");
										fflush(stdin);
										scanf("%c", &volver);
										break;
									case 3:
										pf=fopen("premierclasificacion.txt","r");
								    	if(pf==NULL){
									    	printf("No se ha podidio abrir el fichero\n");
									    	return 0;	
										}
										while(fscanf(pf,"%s",futbol[eleccion2-1].clasificacion)!=EOF) {
											printf("%s\n",futbol[eleccion2-1].clasificacion);	
										}
										fclose(pf);
										printf("\nPulse cualquier letra para volver al menu\n");
										fflush(stdin);
										scanf("%c", &volver);
										break;
									case 4:
										pf=fopen("premierjornada.txt","r");
								    	if(pf==NULL){
									    	printf("No se ha podidio abrir el fichero\n");
									    	return 0;	
										}
										while(fscanf(pf,"%s",futbol[eleccion2-1].proxJornada)!=EOF) {
											printf("%s\n",futbol[eleccion2-1].proxJornada);	
										}
										fclose(pf);
										printf("\nPulse cualquier letra para volver al menu\n");
										fflush(stdin);
										scanf("%c", &volver);
										break;
									default:
										printf("Numero no valido\n");
										break;
									}
								break;
				     	      case 3:
				     	      	system("cls");
				     	      	printf("\nBUNDESLIGA\n \n");
				     	      	printf("Escoja los datos que quiera ver:\n");
					          	printf(" 1. Maximos goleadores\n \n");
					          	printf(" 2. Maximos asistentes\n \n");
					          	printf(" 3. Clasificacion\n \n");
					          	printf(" 4. Siguiente jornada\n \n");
					          	scanf("%d", &eleccion2);
					          	switch(eleccion2){
				     	   			case 1:
										pf= fopen("bundesligagoles.txt", "r");
										if (pf== NULL){
											printf("No se encuentra el fichero\n");
											return 0;
										}
										while(fscanf(pf,"%s", futbol[eleccion2-1].anotadores) != EOF) {
											printf("%s\n", futbol[eleccion2-1].anotadores);
										}
										fclose(pf);
										printf("\nPulse cualquier letra para volver al menu \n");
										fflush(stdin);
										scanf("%c", &volver);
										break;
									case 2:
								    	pf=fopen("bundesligaasistencias.txt","r");
								    	if(pf==NULL){
									    	printf("No se ha podidio abrir el fichero\n");
									    	return 0;	
										}
										while(fscanf(pf,"%s",futbol[eleccion2-1].asistentes)!=EOF){
											printf("%s\n",futbol[eleccion2-1].asistentes);	
										}
										fclose(pf);
										printf("\nPulse cualquier letra para voler al menu\n");
										fflush(stdin);
										scanf("%c", &volver);
										break;
									case 3:
										pf=fopen("bundesligaclasificacion.txt","r");
								    	if(pf==NULL){
									    	printf("No se ha podidio abrir el fichero\n");
									    	return 0;	
										}
										while(fscanf(pf,"%s",futbol[eleccion2-1].clasificacion)!=EOF) {
											printf("%s\n",futbol[eleccion2-1].clasificacion);	
										}
										fclose(pf);
										printf("\nPulse cualquier letra para volver al menu\n");
										fflush(stdin);
										scanf("%c", &volver);
										break;
									case 4:
										pf=fopen("bundesligajornada.txt","r");
								    	if(pf==NULL){
									    	printf("No se ha podidio abrir el fichero\n");
									    	return 0;	
										}
										while(fscanf(pf,"%s",futbol[eleccion2-1].proxJornada)!=EOF) {
											printf("%s\n",futbol[eleccion2-1].proxJornada);	
										}
										fclose(pf);
										printf("\nPulse cualquier letra para volver al menu\n");
										fflush(stdin);
										scanf("%c", &volver);
										break;
									default:
										printf("Numero no valido\n");
										break;
									}
					          	break;
					          case 4:
					          	system("cls");
							    printf("\nLIGUE 1\n \n");
					          	printf("Escoja los datos que quiera ver:\n");
				    	      	printf(" 1. Maximos goleadores\n \n");
				     	      	printf(" 2. Maximos asistentes\n \n");
				     	      	printf(" 3. Clasificacion\n \n");
				     	      	printf(" 4. Siguiente jornada\n \n");
				     	      	fflush(stdin);
								scanf("&d", &eleccion2);
								switch(eleccion2){
									    case 1:
									    	pf=fopen("ligue1goles.txt","r");
									    	if(pf==NULL)
									    	{
									    	printf("No se ha podidio abrir el fichero\n");
									    	return 0;
												
											}
											while(fscanf(pf,"%s",futbol[4].anotadores)!=EOF)
											{
												printf("%s\n",futbol[4].anotadores);
												
											}
											fclose(pf);
												printf("\nSi desea volver al menu inicial pulse s\n");
											fflush(stdin);
											scanf("%c", &volver);
											break;
										default:
											printf("Numero no valido\n");
											break;
									   }   	
									   
							   	break;
							
							   case 5:
							   printf("\nSERIE A\n \n");
				     	      	printf("Escoja los datos que quiera ver:\n");
				     	      	printf(" 1. Maximos goleadores\n \n");
				     	      	printf(" 2. Maximos asistentes\n \n");
				     	      	printf(" 3. Clasificacion\n \n");
				     	      	printf(" 4. Siguiente jornada\n \n");
				     	      	scanf("%d", &eleccion2);
								break;   	
							   case 6:
							    printf("\nCHAMPIONS LEAGUE\n \n");
				     	      	printf("Escoja los datos que quiera ver:\n");
				     	      	printf(" 1. Maximos goleadores\n \n");
				     	      	printf(" 2. Maximos asistentes\n \n");
				     	      	printf(" 3. Clasificacion grupos\n \n");
				     	      	printf(" 4. Siguiente jornada\n \n");	
				     	      	scanf("%d", &eleccion2);
				     	      case 7:
							    break;
							default:
							printf("No valido\n");	
							break;
					 }
				break;
			case 2:
				printf("1. NBA\n");
				printf("2. ACB\n");
				printf("3. Euroliga\n");
				printf("\n");
				printf("4. Volver al menu principal\n");;
				scanf("%d", &eleccion1);
				     switch(eleccion1){
					             case 1:
					              printf("\nNBA \n \n");	
					              printf("Escoja los datos que quiera ver:\n");
								  printf(" 1. Maximos anotadores\n \n");
								  printf(" 2. Maximos asistentes\n \n");
								  printf(" 3. Clasificacion Este\n \n");
								  printf(" 4. Clasificacion Oeste\n \n");
								  printf(" 5.Horarios proxima jornada\n \n");
								  scanf("%d", &eleccion2);
								  
								  
								  break;
								 case 2:
								  printf("\nACB \n \n"); 
								  printf("Escoja los datos que quiera ver:\n");
							      printf(" 1. Maximos anotadores\n \n"); 
					 			  printf(" 2. Maximos asistentes");
								  printf(" 3. Clasificacion\n \n");
								  printf(" 4. Horarios proxima jornada\n \n");
								  scanf("%d", &eleccion2);	
								  break;
								 case 3:
						     		  printf("\nEUROLIGA \n \n"); 
								  printf("Escoja los datos que quiera ver:\n");
								  printf(" 1. Maximos anotadores\n \n");
								  printf(" 2. Maximos asistentes\n \n");
								  printf(" 3. Clasificacion grupos\n \n");
								  printf(" 4.Horarios proxima jornada\n \n");
								  scanf("%d", &eleccion2);
								  break;
								 case 4:
								  break; 									 
								  default:
								  printf("La opcion escogida es incorrecta\n");
								  break; 
					}
					break;
				case 3:
					break;
				default:
					printf("La opcion escogida es incorrecta");;
					break;
		}
				
	} while(opcion != 3);
	return 0;
}
