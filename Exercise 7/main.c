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
    sum = sum + pow(remainder, 3);
    userNumber = userNumber / 10;

    // Second pass
    remainder = userNumber % 10;
    sum = sum + pow(remainder, 3);
    userNumber = userNumber / 10;
    sum = sum + userNumber;

    if (temp == sum) {
        printf("Armstrong number.");
    } 
    else {
        printf("Not armstrong number.");
    }

    return 0;
}