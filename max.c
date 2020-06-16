#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main() {
	int max = -1;
	int list[10];
	
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		list[i] = rand() % 100;
		
	}
	printf("list={");
	for (int i = 0; i < 10; i++) {
		printf("%d ", list[i]);
	}
	printf("}\n");
	for (int i = 0; i < 10; i++) {
		if (list[i] > max)
			max = list[i];
	}
	printf("최대값은 %d입니다.",max);
	return 0;
}