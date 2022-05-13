#include <stdio.h>
#include <stdlib.h>

int main() {

  char userChar;

  // Prompt user to enter a charachter, save as userChar.
  printf("Enter a character: ");
  scanf("%c", &userChar);

  // Test userChar is uppercase or not if the ASCII value of userChar is 97 ... 122.
  if (userChar >= 'a' && <= 'z') {
      // Output converted userChar using toupper() if lowercase.
      printf("input: %c\toutput: $c", userChar, toupper(userChar));
  } else {
      // Output that userChar is already uppercase if not.
      printf("The character you entered is already uppercase.");
  }

  return 0;
  
}