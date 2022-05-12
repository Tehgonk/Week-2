/* Exercise 7 - Armstrong numbers.
 * Author: Daniel Geula
 * Date: 12/05/2022
 * Version: 1.0
*/

#include <stdio.h>
#include <math.h>

int main() {

    int userNumber, remainder, sum = 0, temp;

    printf("\nEnter a three digit number: ");
    scanf("%d", &userNumber);
    temp = userNumber;
    
    // First pass
    remainder = userNumber % 10;
    sum = sum + remainder*remainder*remainder;
    userNumber = userNumber / 10;

    // Second pass
    remainder = userNumber % 10;
    sum = sum + remainder*remainder*remainder;
    userNumber = userNumber / 10;

    // Third pass
    remainder = userNumber % 10;
    sum = sum + remainder*remainder*remainder;
    userNumber = userNumber / 10;

    if (temp == sum) {
        printf("\nArmstrong number.\n");
    } 
    else {
        printf("\nNot armstrong number.\n");
    }

    return 0;
}