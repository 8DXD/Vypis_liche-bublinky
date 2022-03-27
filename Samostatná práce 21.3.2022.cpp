#include <stdio.h>

long vypis(int x) {
	if (x < 1) {
		printf("ERROR - napis kladne cele cislo ruzne od nuly");
	}
	else {
		for (int i = 1; i <= x; i++) {
			printf("%d ", i);
			i++;
		}
	}
}

void printArray(int arr[], int size) {
	int pocet = sizeof (arr) / sizeof(arr[0]);
	for (int i = 0; i < size; i++) {
		printf("%d, ", arr[i]);
	}
	printf("\n");
}

void prohodit(int *a, int *b) {
	int temp = *a;
	*a = *b; 
	*b = temp;
}

void bubblesort(int arr[], int size) {
	for (int j = 0; j < size - 1; j++) {
		for (int i = 0; i < size - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				prohodit(&arr[i], &arr[i + 1]);
			}
		}
	}
}

int main () {
	int a;
	printf("Zadej cislo: ");
	scanf_s("%d", &a);
	vypis(a);
	printf("\n\n\n");

	//
	int pole[] = { 64,34,25,12,22,11,90 };
	int pocet = sizeof(pole) / sizeof(pole[0]);
	printArray(pole, pocet);
	bubblesort(pole, pocet);
	printArray(pole, pocet);
}