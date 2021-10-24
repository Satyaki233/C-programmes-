#include<stdio.h>
#include<stdlib.h>

int main() {

	char name[] = "Satyaki De Sarkar";
	int age = 21;
	printf("%s is the best and he is only %d \n", name,age);

	/*Data Types
	  Char , Char[] , int , double , float;
	  char = 'singel charecter';
	  int = 'number';
	  double = 'decimal number' -> ex. 1023.1335 ;
	  

	
	*/

	int a = 20;
	char b[] = "This is awesome";
	float x = 5.21;
	double dlb= 126530.23565;
	char i = 'j';


	printf("%d , %s , %f , %lf , %c \n \n", a, b, x, dlb , i );

	/*User input*/
	/*int number;
	printf("Enter a number =");
	scanf_s("%d",&number );
	printf("your nnumber is %d \n", number);
    */
	/*fgets for name*/

	char teacher[20];
	printf("Enter the name of teacher: ");
	fgets(teacher, 20, stdin);
	printf("The name of the teacher is = %s", teacher);



	
	
	return 0;
}