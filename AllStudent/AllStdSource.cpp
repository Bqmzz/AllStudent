#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	int i;
	int num;
	printf("Input rooms of class = ");
	scanf_s("%d", &num);

	int StdInRoom[100];
	int sum = 0;

	for (i = 1; i <= num; i++) {
		printf("\nStudents in Room [%d] = ", i);
		scanf_s("%d", &StdInRoom[i]);
		sum += StdInRoom[i];
	}
	printf("\nAll Students in Class = %d", sum);
	return 0;
}