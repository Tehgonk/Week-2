/* Exercise 7 - Armstrong numbers.
 * Author: Daniel Geula
 * Date: 12/05/2022
 * Version: 1.0
*/

#include <stdio.h>
#include <math.h>

int main() {

    int userNum, remainder, sum = 0, temp;

    printf("\nEnter a three digit number: ");
    scanf("%d", &userNum);
    temp = userNum;
    
    
    // Compute the sum of the cubes of the digits of userNum, save as sum.
    // First digit.
    remainder = userNum % 10;
    sum = sum + remainder*remainder*remainder;
    userNum = userNum / 10;
    // Second digit.
    remainder = userNum % 10;
    sum = sum + remainder*remainder*remainder;
    userNum = userNum / 10;
    // Final digit.
    remainder = userNum % 10;
    sum = sum + remainder*remainder*remainder;
    userNum = userNum / 10;


    if (temp == sum) {
        printf("\nArmstrong number.\n");
    } 
    else {
        printf("\nNot armstrong number.\n");
    }

    return 0;
}