/* Exercise 7 - Armstrong number.
 * Author: Daniel Geula
 * Date: 12/05/2022
 * Version: 1.0
*/

#include <stdio.h>
#include <math.h>

int main() {

    int userNumber, remainder, sum = 0, temp;

    printf("Enter a three digit number: ");
    scanf("%d", &userNumber);
    temp = userNumber;
    
    // First pass
    remainder = userNumber % 10;
    sum = sum + remainder*remainder*remainder;
    userNumber = userNumber / 10;

    // printf("Pass1: remainder = %d, sum = %d, userNumber = %d\n", remainder, sum, userNumber);

    // Second pass
    remainder = userNumber % 10;
    sum = sum + remainder*remainder*remainder;
    userNumber = userNumber / 10;

    // printf("Pass2: remainder = %d, sum = %d, userNumber = %d\n", remainder, sum, userNumber);

    sum = sum + userNumber;

    // printf("temp = %d, sum = %d", temp, sum);

    if (temp == sum) {
        printf("Armstrong number.");
    } 
    else {
        printf("Not armstrong number.");
    }

    return 0;
}