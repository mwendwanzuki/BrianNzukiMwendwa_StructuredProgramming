#include <stdio.h>

int main(){
int num1, num2,choice, result;

printf("simple calculator\n");
printf("1. Add\n");
printf("2. Subtract\n");


printf("Enter your choice (1 or 2):" );
scanf("%d", &choice);


printf("Enter first number:");
scanf("%d", &num1);

printf("Enter second number:");
scanf("%d", &num2);

switch (choice) {
  case 1:
      result = num1 + num2;
      printf("Result: %d\n", result);
      break;
  case 2:
    result = num1 - num2;
    printf("Result: %d\n", result);
    break;
  default:
    printf("Invalid choice.\n");
    }
    return 0;
}
