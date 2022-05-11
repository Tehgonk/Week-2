/* Exercise 1 - Find min and max
 * Author: Daniel Geula
 * Date: 02/05/2022
 * Version: 1.0
 */

#include <stdio.h>

int main() {

    float a, b, c, d, smallest, largest;

    // Prompt user for four numbers, save as a, b, c, d.
    printf("Enter 4 numbers: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    // Find smallest number, starting with whether a < b, c, and d, save as smallest if true.
    if(a < b && a < c && a < d) { 
        smallest = a;
    // Eliminate the previous variable from the comparison every time it's not the smallest number.
    } else if(b < a && b < c && b < d) {
        smallest = b;
    } else if(c < a && c < b && c < d) {
        smallest = c;
    } else {
        smallest = d;
    }

    // Find largest number by mirroring the algorithm for finding the smallest number.
    if(a > b && a > c && a > d) {
        largest = a;
    } else if(b > a && b > c && b > d) {
        largest = b;
    } else if(c > a && c > b && c > d) {
        largest = c;
    } else {
        largest = d;
    }

    // Output smallest and largest numbers.
    printf("\nThe smallest number is: %g\n", smallest);
    printf("The largest number is: %g\n", largest);

    return 0;
}
