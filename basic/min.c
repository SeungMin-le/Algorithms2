#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	int min = 101;
	int list[10];
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		list[i] = (rand() % 100)+1;
	}
	printf("list={");
	for (int i = 0; i < 10; i++) {
		printf("%d ",list[i]);
	}
	printf("}");
	for (int i = 0; i < 10; i++) {
		if (list[i] < min)
			min = list[i];
	}
	printf("\n%d",min);
	return 0;

}