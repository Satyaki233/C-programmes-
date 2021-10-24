#include <stdio.h>
#include <stdlib.h>

int findMax(int num1, int num2);

int main() {
	int num1, num2;
	int max;
	printf("Hello \n");
	printf("Enter the first number : ");
	scanf_s("%d", &num1);
	printf("Enter number two : ");
	scanf_s("%d", &num2);
	max = findMax(num1, num2);
	printf("max number is = %d ", max);
	return 0;
}

int findMax(int num1, int num2) {
	int result;
	if (num1 > num2) {
		result = num1;
	}
	else {
		result = num2;
	}
	return result;
}