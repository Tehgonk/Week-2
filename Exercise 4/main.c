/* Exercise 4  - Convert a numerical grade into a letter grade.
 * Author: Daniel Geula
 * Date: 10/05/2022
 * Version: 1.0
*/

#include <stdio.h>

int main() {

    int numericalGrade;

    // Prompt user for numerical grade, save as numericalGrade.
    printf("\nEnter numerical grade: ");
    scanf("%d", &numericalGrade);

    
    // Convert numerical grade to letter grade using switch statement.
    switch (numericalGrade)
    {
    
    // Specify a case range for each letter grade.
    case 0 ... 59:
        // Output a letter grade for each case.
        printf("\nLetter grade is: F\n");
        break;

    case 60 ... 69:
        printf("\nLetter grade is: D\n");
        break;
    
    case 70 ... 79:
        printf("\nLetter grade is: C\n");
        break;
    
    case 80 ... 89:
        printf("\nLetter grade is: B\n");
        break;
    
    case 90 ... 100:
        printf("\nLetter grade is: A\n");
        break;
    
    // Output an error message for the default case to handle unexpected input.
    default:
        printf("\nNumerical grade must be between 1-100\n");
        break;
    }

    return 0;

}