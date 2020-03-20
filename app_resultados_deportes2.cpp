#include<stdio.h>

int main(){
	printf("     AAA        PPPPPPPP     PPPPPPPP   \n");
	printf("    AA AA       PPP    PP    PPP    PP  \n");
	printf("   AA   AA      PPP    PP    PPP    PP  \n");
	printf("  AAAAAAAAA     PPPPPPP      PPPPPPP    \n");
	printf(" AA       AA    PPP          PPP        \n");
	printf("AA         AA   PPP          PPP        \n");
	printf("---------------------------------------------------------\n");
	int opcion;
	char usuario[100];
	int contrasena;
	int control=0;
	
	do{
	
	printf("Introduzca su usuario para entrar\n");
	printf("Usuario:");
	gets(usuario);
	printf("\n");
	printf("Contrasena:");
	scanf("%d", &contrasena);
}
while(contrasena!=1234);
	
	
	system("cls");
	printf("     AAA        PPPPPPPP     PPPPPPPP   \n");
	printf("    AA AA       PPP    PP    PPP    PP  \n");
	printf("   AA   AA      PPP    PP    PPP    PP  \n");
	printf("  AAAAAAAAA     PPPPPPP      PPPPPPP    \n");
	printf(" AA       AA    PPP          PPP        \n");
	printf("AA         AA   PPP          PPP        \n");
	printf("---------------------------------------------------------\n");
	
	do{
		printf("MARCADORES Y RESULTADOS\n\n");
		printf("1. Futbol\n");
		printf("2. Baloncesto\n");
		printf("\n");
		printf("3. Salir\n");
		scanf("%d", &opcion);
		
		switch(opcion){
			case 1:
				printf("1. La Liga Santander\n");
				printf("2. Premier League\n");
				printf("3. Ligue 1\n");
				printf("4. Bundesliga\n");
				printf("5. Serie A\n");
				printf("6. Champions League\n");
				printf("\n");
				printf("7.Volver al menu principal\n");
				break;
			case 2:
				printf("1. NBA\n");
				printf("2. ACB\n");
				printf("3. Euroliga\n");
				printf("\n");
				printf("Volver al menu principal\n");;
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
