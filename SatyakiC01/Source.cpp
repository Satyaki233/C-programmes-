#include <stdio.h>
#include <stdlib.h>

void sayHi(const char name[], int age);


int main() {
	/* Array and Loops */

	int age[5] = { 20 ,21,22,23,24 };
	int i = 0;
	int j = 0;
	char friends[5][10] = {
		"Rahul",
		"Snehal",
		"Sneho",
		"Dip",
		"Ayan"
	};
	
	while (i <= 4) {
		sayHi(friends[i], age[i]);
		i++;
	}

	printf("Again \n");

	for (j = 0; j <= 4; j++) {
		sayHi(friends[j], age[j]);
	}
	
	
	return 0;

}


/*Fuctions 
 


*/
void sayHi(const char name[] , int age){
	printf("Hello everyone \n");
	printf("My name is %s \n my age is  %d \n", name,age);
}
	