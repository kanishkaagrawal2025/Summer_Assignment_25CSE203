#include <stdio.h>
int main() {
 int a, b;
 char op;
 printf("Enter expression (e.g. 2 + 3): ");
 scanf("%d %c %d", &a, &op, &b);
 switch(op) {case '+':
 printf("Result = %d", a + b);
 break;
 case '-':
 printf("Result = %d", a - b);
 break;
 case '*':
 printf("Result = %d", a * b);
 break;
 case '/':
 printf("Result = %d", a / b);
 break;
 default:
 printf("Invalid Operator");
 }
 return 0;
}