/*Exercise 2 - Sort Ascending and Descending
 * Author: Daniel Geula
 * Date: 03/05/2022
 * Version: 1.0
*/

#include <stdio.h>

int main() {

    float a, b, c, d, t;

    // Prompt user for four numbers, save as a, b, c, d.
    printf("\nEnter 4 numbers: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    // Sort numbers in ascending order using a sorting network algorithm.
    if (a > c) {t = a; a = c; c = t;}
    if (b > d) {t = b; b = d; d = t;}
    if (a > b) {t = a; a = b; b = t;}
    if (c > d) {t = c; c = d; d = t;}
    if (b > c) {t = b; b = c; c = t;}

    // Output numbers in ascending order.
    printf("\nAscending order: %g %g %g %g", a, b, c, d);

    // Sort numbers in descending order by mirroring the same algorithm.
    if (a < c) {t = a; a = c; c = t;}
    if (b < d) {t = b; b = d; d = t;}
    if (a < b) {t = a; a = b; b = t;}
    if (c < d) {t = c; c = d; d = t;}
    if (b < c) {t = b; b = c; c = t;}

    // Output numbers in descending order.
    printf("\nDescending order: %g %g %g %g\n", a, b, c, d);

    return 0;
}