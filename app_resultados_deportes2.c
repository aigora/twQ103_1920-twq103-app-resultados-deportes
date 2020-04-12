#include<stdio.h>
#include <conio.h>
#include <string.h> 
struct datos{
	char anotadores[500];
	char asistentes[500];
	char clasificacion[500];
	char proxJornada[500];
		
};
int main(){
	FILE * pf;
	struct datos futbol[50];
	struct datos baloncesto[50];
	int opcion, eleccion1, eleccion2;
	char usuario[100];
	char volver;
	int contrasena;
	int control=0;
	
	
	printf("     AAA        PPPPPPPP     PPPPPPPP   \n");
	printf("    AA AA       PPP    PP    PPP    PP  \n");
	printf("   AA   AA      PPP    PP    PPP    PP  \n");
	printf("  AAAAAAAAA     PPPPPPP      PPPPPPP    \n");
	printf(" AA       AA    PPP          PPP        \n");
	printf("AA         AA   PPP          PPP        \n");
	printf("---------------------------------------------------------\n");
	
	do{
	
	printf("Introduzca su usuario para entrar\n");
	printf("Usuario:");
	gets(usuario);
	printf("\n");
	printf("Contrasena:");
	scanf("%d", &contrasena);
}
while(contrasena!=1234);
	
	
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
											while(fscanf(pf,"%s", futbol[0].anotadores) != EOF) {
												printf("%s\n", futbol[0].anotadores);
											}
											fclose(pf);
											printf("\nSi desea volver al menu inicial pulse s\n");
											fflush(stdin);
											scanf("%c", &volver);
											break;
										case 2:
										system("cls");
									    	pf=fopen("ligue1asistencias.txt","r");
									    	if(pf==NULL)
									    	{
									    	printf("No se ha podidio abrir el fichero\n");
									    	return 0;
												
											}
											while(fscanf(pf,"%s",futbol[0].anotadores)!=EOF)
											{
												printf("%s\n",futbol[0].anotadores);
												
											}
											fclose(pf);
												printf("\nSi desea volver al menu inicial pulse s\n");
											fflush(stdin);
											scanf("%c", &volver);
											break;						     	      				
									   }
				     	      	break;
				     	      case 2:
				     	      	printf("\nPREMIER LEAGUE\n \n");
				     	      	printf("Escoja los datos que quiera ver:\n");
				     	      	printf(" 1. Maximos goleadores\n \n");
				     	      	printf(" 2. Maximos asistentes\n \n");
				     	      	printf(" 3. Clasificacion\n \n");
				     	      	printf(" 4. Siguiente jornada\n \n");
				     	      	scanf("%d", &eleccion2);
								break;
				     	      case 3:
				     	      	printf("\nBUNDESLIGA\n \n");
				     	      	printf("Escoja los datos que quiera ver:\n");
					          	printf(" 1. Maximos goleadores\n \n");
					          	printf(" 2. Maximos asistentes\n \n");
					          	printf(" 3. Clasificacion\n \n");
					          	printf(" 4. Siguiente jornada\n \n");
					          	scanf("%d", &eleccion2);
					          	break;
					          case 4:
							   printf("\nLIGUE 1\n \n");
					          	printf("Escoja los datos que quiera ver:\n");
				    	      	printf(" 1. Maximos goleadores\n \n");
				     	      	printf(" 2. Maximos asistentes\n \n");
				     	      	printf(" 3. Clasificacion\n \n");
				     	      	printf(" 4. Siguiente jornada\n \n");
								scanf("&d", &eleccion2);
								switch(eleccion2)
								{
									    case 1:
									    	system("cls");
									    	pf=fopen("ligue1goles.txt","r");
									    	if(pf==NULL)
									    	{
									    	printf("No se ha podidio abrir el fichero\n");
									    	return 0;
												
											}
											while(fscanf(pf,"%s",futbol[0].anotadores)!=EOF)
											{
												printf("%s\n",futbol[0].anotadores);
												
											}
											fclose(pf);
												printf("\nSi desea volver al menu inicial pulse s\n");
											fflush(stdin);
											scanf("%c", &volver);
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
				
	} while(opcion!=3);
	return 0;
}
