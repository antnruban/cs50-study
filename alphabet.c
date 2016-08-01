#include <stdio.h>

/*
** CS50 Course.
** ASCII Lesson.
** Task: Complete the following program that prompts the user to enter an alphabetical character
** and determines whether the character is uppercase or lowercase.
*/

char getPrompt(void);

int main (void)
{
  printf("Please enter an alphabetical character: ");
  char c = getPrompt();
  if ( c >= 'A' && c <= 'Z' ) {
    printf("Thank you for the uppercase letter!\n");
  }
  else if( c >= 'a' && c <= 'z' ) {
    printf("Thank you for the lowercase letter!\n");
  }
  else {
    printf("You did not enter an alphabetical character!\n");
  }
}

char getPrompt(void)
{
  char prompt;
  scanf("%c", &prompt);
  return prompt;
}
