#include <stdio.h>
#include <string.h>

int main() {
	int tam = 4, aux;
	int pontos[] = {6,8, 11, 15};
	int time = 0, i, j;
	char times[4][64] = {"Argentina", "Canada", "Peru", "Chile"};
	int ordem[tam], posicao = 0;
	
	for(i = 0; i < tam; i++) {
		for(j = i+1; j < tam; j++) {
			if(pontos[j] > pontos[i]) {
				aux = pontos[i];
				pontos[i] = pontos[j];
				pontos[j] = aux;
				
				
				char temp[64];
                strcpy(temp, times[i]);
                strcpy(times[i], times[j]);
                strcpy(times[j], temp);
			}
			
		}
		
	}
	
	for(i = 0; i < tam;  i++) {
		printf("Time: %s\n", times[i]);
		printf("Pontos %i\n\n", pontos[i]);
	}
	
	return 0;
}

