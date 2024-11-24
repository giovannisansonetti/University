#include <stdio.h>
#include <stdlib.h>
#define LEN 30

int main() {
	int consumo[LEN]; // in litri
	int minCarb = 101, maxCarb = -1;
	int giornoMax = -1, giornoMin = -1;
	int i;

	for(i = 0; i < 30; i++) {
		do {
			printf("Inserisci la quantità di carburante consumato oggi \n");
			scanf("%d", &consumo[i]);

		} while (consumo[i] < 0 || consumo[i] > 100);

		if (consumo[i] > maxCarb) {
			maxCarb = consumo[i];
			giornoMax = i;
		}

		if (consumo[i] < maxCarb) {
			minCarb = consumo[i];
			giornoMin = i;
		}
	}
	printf("Il giorno %d e stato consumato la maggior quantità di carburante: [%d] \n", giornoMax, maxCarb);
	printf("Il giorno %d e stato consumato la minor quantità di carburante: [%d]", giornoMin, minCarb);
}
