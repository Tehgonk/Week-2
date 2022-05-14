/* Exercise 6 - Calculator.
 * Author: Daniel Geula
 * Date: 12/05/2022
 * Version: 1.0
*/

#include <stdio.h>
#include <math.h>

int main() {

    double n1, n2;
    char op;

    // Prompt user to enter two numbers separated by an operator, save as n1, n2, op.
    printf("\nAllowed operators: '+' '-' '/' '%%' '^'\n");
    printf("Enter two numbers separated by an operator: ");
    scanf("%lf%c%lf", &n1, &op, &n2);
    

    // Compute result of operation on n1 and n2 using switch statement.
    // Output result of operation on n1 and n2 for each case.
    switch (op) {
        case '+':
        printf("\n%g%c%g = %g\n", n1, op, n2, n1 + n2);
        break;

        case '-':
        printf("\n%g%c%g = %g\n", n1, op, n2, n1 - n2);
        break;

        case '/':
        printf("\n%g%c%g = %g\n", n1, op, n2, n1 / n2);
        break;

        case '%':
        printf("\n%g%c%g = %g\n", n1, op, n2, fmod(n1, n2));
        break;

        case '^':
        printf("\n%g%c%g = %g\n\n", n1, op, n2, pow(n1, n2));
        break;

        default: // Output error message for default case to handle unexpected input.
        printf("\nInvalid operator\n");
        break;
    }

    return 0;
}