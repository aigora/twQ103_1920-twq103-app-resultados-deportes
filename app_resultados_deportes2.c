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
void banner();		void menuSerieA();
void mainMenu();	void menuLigue1(); 
void menufutbol();	void menuChampions();
void menuLaliga();	void menuBaloncesto();
void menuPremier();	void menuNBA();
void menuBundes();	void menuACB();
void menuEuroliga();
int inicioSes(struct datos inicioSesion[]);
int main(){
	FILE * pf;
	struct datos futbol[50];
	struct datos baloncesto[50];
	struct datos inicioSesion[50];
	int opcion, eleccion1, eleccion2, inicio;
	char volver[100];
	
	banner();
	inicioSes(inicioSesion);
		
	do{
		system ("cls");
		banner();
		mainMenu();		
		scanf("%d", &opcion);
		
		
		switch(opcion){
			case 1:
				system("cls");
				banner();
				menufutbol();
				scanf("%d",&eleccion1);
				     switch(eleccion1){
				     	      case 1:
				     	      	system("cls");
				     	      	banner();
				     	      	menuLaliga();
				     	      	scanf("%d", &eleccion2);
				     	   		switch(eleccion2){
				     	   			case 1:
				     	   				system ("cls");
										banner();
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
										system ("cls");
										banner();
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
										system ("cls");
										banner();
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
										system ("cls");
										banner();
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
				     	      	banner();
				     	      	menuPremier();
				     	      	scanf("%d", &eleccion2);
				     	      	switch(eleccion2){
				     	   			case 1:
				     	   				system ("cls");
										banner();
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
										system ("cls");
										banner();
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
										system ("cls");
										banner();
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
										system ("cls");
										banner();
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
				     	      	banner();
				     	      	menuBundes();
					          	scanf("%d", &eleccion2);
					          	switch(eleccion2){
				     	   			case 1:
				     	   				system ("cls");
										banner();
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
										system ("cls");
										banner();
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
										system ("cls");
										banner();
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
										system ("cls");
										banner();
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
					          	banner();
							    menuLigue1();
								scanf("&d", &eleccion2);
								switch(eleccion2){	
									case 1:	
										system ("cls");
										banner();
										pf= fopen("ligue1goles.txt", "r");
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
										scanf("%c",&volver);
										break;
									 case 2:
									 	system ("cls");
										banner();
										pf=fopen("ligue1asistencias.txt","r");
										if(pf==NULL){
											printf("No se encuentra el fichero\n");
										        return 0;
										}
										while(fscanf(pf,"%s", futbol[eleccion2-1].asistentes)!=EOF)
										{
										printf("%s\n", futbol[eleccion2-1].asistentes);
										}
										fclose(pf);
										printf("\nPulse cualquier letra para volver al menu\n");
										fflush(stdin);
										scanf("%c",&volver);
										break;
									case 3:
										system ("cls");
										banner();
										pf=fopen("ligue1clasificacion.txt","r");
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
										system ("cls");
										banner();
										pf=fopen("ligue1jornada.txt","r");
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
							   case 5:
							   	system("cls");
							   	banner();
							    menuSerieA();
				     	      	scanf("%d", &eleccion2);
						     	switch(eleccion2){	
									case 1:	
										system ("cls");
										banner();
										pf= fopen("serieagoles.txt", "r");
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
									 	system ("cls");
										banner();
										pf=fopen("serieaasistencias.txt","r");
										if(pf==NULL){
											printf("No se encuentra el fichero\n");
										        return 0;
										}
										while(fscanf(pf,"%s", futbol[eleccion2-1].asistentes)!=EOF)
										{
										printf("%s\n", futbol[eleccion2-1].asistentes);
										}
										fclose(pf);
										printf("\nPulse cualquier letra para volver al menu\n");
										fflush(stdin);
										scanf("%c", &volver);
										break;
									case 3:
										system ("cls");
										banner();
										pf=fopen("serieaclasificacion.txt","r");
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
										system ("cls");
										banner();
										pf=fopen("serieajornada.txt","r");
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
							   case 6:
							   	system("cls");
							   	banner();
							    menuChampions();	    
				     	      	scanf("%d", &eleccion2);
						     	switch(eleccion2){	
									case 1:	
										system ("cls");
										banner();
										pf= fopen("Championsgoles.txt", "r");
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
									 	system ("cls");
										banner();
										pf=fopen("Championsasistencias.txt","r");
										if(pf==NULL){
											printf("No se encuentra el fichero\n");
										        return 0;
										}
										while(fscanf(pf,"%s", futbol[eleccion2-1].asistentes)!=EOF)
										{
										printf("%s\n", futbol[eleccion2-1].asistentes);
										}
										fclose(pf);
										printf("\nPulse cualquier letra para volver al menu\n");
										fflush(stdin);
										scanf("%c", &volver);
										
										break;
										
									case 3:
										system ("cls");
										banner();
										pf=fopen("Championsclasificacion.txt","r");
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
									
									default:
										printf("Numero no valido\n");
										break;
									}
					          	break;	
										
							
						     
				     	      case 7:
							    break;
							default:
							printf("No valido\n");	
							break;
					 }
				break;
			case 2:
				system("cls");
				banner();
				menuBaloncesto();
				scanf("%d", &eleccion1);
				     switch(eleccion1){
					             case 1:
					              system("cls");
								  banner();
								  menuNBA();					        	
								  scanf("%d", &eleccion2);
								  switch(eleccion2){
				     	   			case 1:
				     	   				system ("cls");
								        banner();
										pf= fopen("nbaanotadores.txt", "r");
										if (pf== NULL){
											printf("No se encuentra el fichero\n");
											return 0;
										}
										while(fscanf(pf,"%s", baloncesto[eleccion2-1].anotadores) != EOF) {
											printf("%s\n", baloncesto[eleccion2-1].anotadores);
										}
										fclose(pf);
										printf("\nPulse cualquier letra para volver al menu \n");
										fflush(stdin);
										scanf("%c", &volver);
										break;
									case 2:
										system ("cls");
								        banner();
								    	pf=fopen("nbaasistencias.txt","r");
								    	if(pf==NULL){
									    	printf("No se ha podidio abrir el fichero\n");
									    	return 0;	
										}
										while(fscanf(pf,"%s",baloncesto[eleccion2-1].asistentes)!=EOF){
											printf("%s\n",baloncesto[eleccion2-1].asistentes);	
										}
										fclose(pf);
										printf("\nPulse cualquier letra para voler al menu\n");
										fflush(stdin);
										scanf("%c", &volver);
										break;
									case 3:
										system ("cls");
								        banner();
										pf=fopen("nbaclasificacioneste.txt","r");
								    	if(pf==NULL){
									    	printf("No se ha podidio abrir el fichero\n");
									    	return 0;	
										}
										while(fscanf(pf,"%s",baloncesto[eleccion2-1].clasificacion)!=EOF) {
											printf("%s\n",baloncesto[eleccion2-1].clasificacion);	
										}
										fclose(pf);
										printf("\nPulse cualquier letra para volver al menu\n");
										fflush(stdin);
										scanf("%c", &volver);
										break;
									case 4:
										system ("cls");
								        banner();
										pf=fopen("nbaclasificacionoeste.txt","r");
								    	if(pf==NULL){
									    	printf("No se ha podidio abrir el fichero\n");
									    	return 0;	
										}
										while(fscanf(pf,"%s",baloncesto[eleccion2-1].clasificacion)!=EOF) {
											printf("%s\n",baloncesto[eleccion2-1].clasificacion);	
										}
										fclose(pf);
										printf("\nPulse cualquier letra para volver al menu\n");
										fflush(stdin);
										scanf("%c", &volver);
										break;	
									case 5:
										system ("cls");
								        banner();
										pf=fopen("nbahorariosproximajornada.txt","r");
								    	if(pf==NULL){
									    	printf("No se ha podidio abrir el fichero\n");
									    	return 0;	
										}
										while(fscanf(pf,"%s",baloncesto[eleccion2-1].proxJornada)!=EOF) {
											printf("%s\n",baloncesto[eleccion2-1].proxJornada);	
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
								  banner();
								  menuACB();								 
								  scanf("%d", &eleccion2);
								  switch(eleccion2){	
									case 1:
										system ("cls");
								        banner();	
										pf= fopen("acbanotadores.txt", "r");
										if (pf== NULL){
											printf("No se encuentra el fichero\n");
											return 0;
										}
										while(fscanf(pf,"%s", baloncesto[eleccion2-1].anotadores) != EOF) {
											printf("%s\n", baloncesto[eleccion2-1].anotadores);
										}
										fclose(pf);
										printf("\nPulse cualquier letra para volver al menu \n");
										fflush(stdin);
										scanf("%c", &volver);
										break;
									 case 2:
									 	system ("cls");
								        banner();
										pf=fopen("acbasistencias.txt","r");
										if(pf==NULL){
											printf("No se encuentra el fichero\n");
										        return 0;
										}
										while(fscanf(pf,"%s", baloncesto[eleccion2-1].asistentes)!=EOF)
										{
										printf("%s\n", baloncesto[eleccion2-1].asistentes);
										}
										fclose(pf);
										printf("\nPulse cualquier letra para volver al menu\n");
										fflush(stdin);
										scanf("%c", &volver);
										break;
									case 3:
										system ("cls");
								        banner();
										pf=fopen("acbclasificacion.txt","r");
								    	if(pf==NULL){
									    	printf("No se ha podidio abrir el fichero\n");
									    	return 0;	
										}
										while(fscanf(pf,"%s",baloncesto[eleccion2-1].clasificacion)!=EOF) {
											printf("%s\n",baloncesto[eleccion2-1].clasificacion);	
										}
										fclose(pf);
										printf("\nPulse cualquier letra para volver al menu\n");
										fflush(stdin);
										scanf("%c", &volver);
										break;
									case 4:
										system ("cls");
								        banner();
										pf=fopen("acbhorariosproximajornada.txt","r");
								    	if(pf==NULL){
									    	printf("No se ha podidio abrir el fichero\n");
									    	return 0;	
										}
										while(fscanf(pf,"%s",baloncesto[eleccion2-1].proxJornada)!=EOF) {
											printf("%s\n",baloncesto[eleccion2-1].proxJornada);	
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
								  banner();
								  menuEuroliga();						     	
								  scanf("%d", &eleccion2);
								  switch(eleccion2){	
									case 1:	
										system ("cls");
								        banner();
										pf= fopen("euroligaanotadores.txt", "r");
										if (pf== NULL){
											printf("No se encuentra el fichero\n");
											return 0;
										}
										while(fscanf(pf,"%s", baloncesto[eleccion2-1].anotadores) != EOF) {
											printf("%s\n", baloncesto[eleccion2-1].anotadores);
										}
										fclose(pf);
										printf("\nPulse cualquier letra para volver al menu \n");
										fflush(stdin);
										scanf("%c", &volver);
										
										
										break;
									 case 2:
									 	system ("cls");
								        banner();
										pf=fopen("euroligaasistencias.txt","r");
										if(pf==NULL){
											printf("No se encuentra el fichero\n");
										        return 0;
										}
										while(fscanf(pf,"%s", baloncesto[eleccion2-1].asistentes)!=EOF)
										{
										printf("%s\n", baloncesto[eleccion2-1].asistentes);
										}
										fclose(pf);
										printf("\nPulse cualquier letra para volver al menu\n");
										fflush(stdin);
										scanf("%c", &volver);
										break;
									case 3:
										system ("cls");
								        banner();
										pf=fopen("euroligaclasificacion.txt","r");
								    	if(pf==NULL){
									    	printf("No se ha podidio abrir el fichero\n");
									    	return 0;	
										}
										while(fscanf(pf,"%s",baloncesto[eleccion2-1].clasificacion)!=EOF) {
											printf("%s\n",baloncesto[eleccion2-1].clasificacion);	
										}
										fclose(pf);
										printf("\nPulse cualquier letra para volver al menu\n");
										fflush(stdin);
										scanf("%c", &volver);
										break;
									case 4:
										system ("cls");
								        banner();
										pf=fopen("euroligahorariosproximajornada.txt","r");
								    	if(pf==NULL){
									    	printf("No se ha podidio abrir el fichero\n");
									    	return 0;	
										}
										while(fscanf(pf,"%s",baloncesto[eleccion2-1].proxJornada)!=EOF) {
											printf("%s\n",baloncesto[eleccion2-1].proxJornada);	
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

void banner(){
	printf("     AAA        PPPPPPPP     PPPPPPPP   \n");
	printf("    AA AA       PPP    PP    PPP    PP  \n");
	printf("   AA   AA      PPP    PP    PPP    PP  \n");
	printf("  AAAAAAAAA     PPPPPPP      PPPPPPP    \n");
	printf(" AA       AA    PPP          PPP        \n");
	printf("AA         AA   PPP          PPP        \n");
	printf("---------------------------------------------------------\n");
}
int inicioSes(struct datos inicioSesion[]){
	FILE * pf;
	int contador, inicio;
	int resultado;
	int i;
	char usuarioycontrasena[50];
	
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
						resultado=strcmp(usuarioycontrasena,inicioSesion[i].usuario);
						if(resultado==0){
							break;
						}
					}
					if(resultado!=0){
						printf("Usuario o contrasena erroneos.\n");
					}										
				}while(resultado!=0);
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
}
void mainMenu(){
	printf("MARCADORES Y RESULTADOS\n\n");
	printf("1. Futbol\n");
	printf("2. Baloncesto\n");
	printf("\n");
	printf("3. Salir\n");
}
void menufutbol(){
	printf(" 1. La Liga Santander\n");
	printf(" 2. Premier League\n");
	printf(" 3. Bundesliga\n");
	printf(" 4. Ligue 1\n");
	printf(" 5. Serie A\n");
	printf(" 6. Champions League\n");
	printf("\n");
	printf(" 7. Volver al menu principal\n");
}	
void menuLigue1(){
	printf("\nLIGUE 1\n \n");
	printf("Escoja los datos que quiera ver:\n");
	printf(" 1. Maximos goleadores\n \n");
	printf(" 2. Maximos asistentes\n \n");
	printf(" 3. Clasificacion\n \n");
	printf(" 4. Siguiente jornada\n \n");
	fflush(stdin);
} 
void menuChampions(){
	printf("\nCHAMPIONS LEAGUE\n \n");
	printf("Escoja los datos que quiera ver:\n");
	printf(" 1. Maximos goleadores\n \n");
	printf(" 2. Maximos asistentes\n \n");
	printf(" 3. Clasificacion grupos\n \n");
}
void menuSerieA(){
	printf("\nSERIE A\n \n");
	printf("Escoja los datos que quiera ver:\n");
	printf(" 1. Maximos goleadores\n \n");
	printf(" 2. Maximos asistentes\n \n");
	printf(" 3. Clasificacion\n \n");
	printf(" 4. Siguiente jornada\n \n");
}
void menuLaliga(){
	printf("\nLALIGA SANTANDER\n \n");
	printf("Escoja los datos que quiera ver:\n");
  	printf(" 1. Maximos goleadores\n \n");
	printf(" 2. Maximos asistentes\n \n");
	printf(" 3. Clasificacion\n \n");
 	printf(" 4. Siguiente jornada\n \n");
}	
void menuPremier(){
	printf("\nPREMIER LEAGUE\n \n");
   	printf("Escoja los datos que quiera ver:\n");
   	printf(" 1. Maximos goleadores\n \n");
   	printf(" 2. Maximos asistentes\n \n");
   	printf(" 3. Clasificacion\n \n");
   	printf(" 4. Siguiente jornada\n \n");
   	fflush(stdin);
}	
void menuBundes(){
	printf("\nBUNDESLIGA\n \n");
	printf("Escoja los datos que quiera ver:\n");
	printf(" 1. Maximos goleadores\n \n");
	printf(" 2. Maximos asistentes\n \n");
	printf(" 3. Clasificacion\n \n");
	printf(" 4. Siguiente jornada\n \n");
}
void menuBaloncesto(){
	printf("1. NBA\n");
	printf("2. ACB\n");
	printf("3. Euroliga\n");
	printf("\n");
	printf("4. Volver al menu principal\n");;
}
void menuNBA(){
    printf("\nNBA \n \n");	
	printf("Escoja los datos que quiera ver:\n");
	printf(" 1. Maximos anotadores\n \n");
	printf(" 2. Maximos asistentes\n \n");
	printf(" 3. Clasificacion Este\n \n");
	printf(" 4. Clasificacion Oeste\n \n");
	printf(" 5.Horarios proxima jornada\n \n");
}
void menuACB(){
	printf("\nACB \n \n"); 
	printf("Escoja los datos que quiera ver:\n");
    printf(" 1. Maximos anotadores\n \n"); 
	printf(" 2. Maximos asistentes\n \n");
    printf(" 3. Clasificacion\n \n");
    printf(" 4. Horarios proxima jornada\n \n");
}
void menuEuroliga(){
    printf("\nEUROLIGA \n \n"); 
    printf("Escoja los datos que quiera ver:\n");
    printf(" 1. Maximos anotadores\n \n");
    printf(" 2. Maximos asistentes\n \n");
    printf(" 3. Clasificacion grupos\n \n");
    printf(" 4.Horarios proxima jornada\n \n");

}
	
	
