#include <stdio.h>
#include <math.h>

int main() {

    double n1, n2;
    char op;

    printf("\nAllowed operators: '+' '-' '/' '%%' '^'\n");
    printf("Enter two numbers separated by an operator: ");
    scanf("%lf%c%lf", &n1, &op, &n2);

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

        default:
        printf("\nInvalid operator\n");
        break;
    }

    return 0;
}