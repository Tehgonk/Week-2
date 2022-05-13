/* Exercise 7 - Character Case Detection and Conversion
 * Author: Daniel Geula
 * Date: 13/05/2022
 * Version: 1.0 
*/

#include <stdio.h>
#include <ctype.h>

int main() {

  char userChar;

  // Prompt user to enter a character, save as userChar.
  printf("\nEnter a character: ");
  scanf("%c", &userChar);

  // Test userChar is uppercase or not if the ASCII value of userChar is 97 ... 122.
  if (userChar >= 'a' && userChar <= 'z') {
      // Output converted userChar using toupper() if lowercase.
      printf("\nInput: %c\tOutput: %c\n", userChar, toupper(userChar));
  } else {
      // Output that userChar is already uppercase if not.
      printf("\nThe character you entered is already uppercase.\n");
  }

  return 0;
  
}