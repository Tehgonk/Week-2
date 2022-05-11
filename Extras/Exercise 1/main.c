/* Week 2 - exercise 1
 * Description:
 * Write a program that asks the user to input 4 numbers and displays the minimum
 * and maximum values.
 *
 * Author: Daniel Geula
 * Date: 29/04/2022
 * Log:
 * Version: 1.0
 */

#include <stdio.h>

int main() {

    // Where the inputted values are stored.
    int num[4];

    printf("Enter four whole numbers\n");

    // Take user input.
    for(int i = 0; i < 4; ++i) {
        printf("%d. Enter number:", i + 1);
        scanf("%d", &num[i]); //could also be just "("%d", num)". Something about arrays and pointers.
    }

    // Used to store the min and max values in 'num'.
    int max = num[0], min = num[0];

    // Find min and max values in 'num'.
    for(int i = 0; i < 4; ++i) {
        if(num[i] < min) {
            min = num[i];
        }
        if(num[i] > max) {
            max = num[i];
        }
    }

    // Print the values of 'min' and 'max'.
    printf("\nThe minimum value is: %d\n", min);
    printf("The maximum value is: %d\n", max);

    return 0;

}